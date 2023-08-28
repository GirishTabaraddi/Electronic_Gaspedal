# Electronic_Gaspedal

A simpler project to understand the Autosar RTE concept.

In this project I have developed an ECU following the Autosar RTE concept. In the concept, the applications software and basic software (drivers and OS) are separated by an intermediate layer called RTE, which provides data containers for a message based communication between runnables and manages events (cyclic and data), which will activate the various runnables. The runnables represent the user code. They only communicate via RTE signal objects, direct hardware driver and OS calls are not allowed. This separation facilitates re-use over projects and controller boundaries.

## Functionality

The runnable run_readJoystick will be called every 10ms. This runnable will update the joystick signal, using the API pullPort(). As this signal is realized as asynchronous signal an event will be fired upon update. This event will trigger the runnable run_calcControl. This runnable will check the value of the joystick signal (datatype sint8_t). If the value is bigger than 0, the speed signal (uint8_t) will be set to 2 x the joystick value. If it is below or equal to 0, the engine value will be 0. Once this value is updated, the run_setBrakeLight will be triggered. run_setEngine will be called every 100ms and copy the speed signal to the engine signal (if it is not too old) and call the driver (pushPort). In case of a too old speed signal, the value 0 shall be written to the engine. run_setBrakeLight will also check the speed value when it is updated. In case the speed value is 0, the signal brakeLight will be turned on, in case of a value bigger than 0 it will be turned off. The brakeLight signal then is also send to the hardware.

## Hardware Watchdog driver

The task is to implement a timeout supervision concept for the PSOC. In case the system comes to a halt, e.g. caused by an endless loop or shutdown of the OS, a reboot should be initiated. This concept is called alive monitoring. As this is a pretty brute force error handling, an additional deadline monitoring shall be implemented, which supervises individual runnables.