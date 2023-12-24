## Embedded Linux 2 Task 4 Submission
## 1. Task: Creating a Static Library for AVR Drivers (MCAL Layer)
### Objective: You are tasked with developing a static library for the Microcontroller Abstraction Layer (MCAL) of your AVR drivers. The library, named libmcal.a, is intended to be used in AVR applications.

#### After Running the makefile you will get the library and elf file to run on your microcontroller

![image](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/570e3251-2216-489a-b81c-a0131d793bd9)
![2023-12-24 19-48-36](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/53f2d62b-2c58-4cbc-b66c-479996ead793)

## 2. Include documentation in the README.md file explaining why using a static library (libmcal.a) in AVR applications over dynamic libraries.
**No Runtime Overhead**: Dynamic libraries introduce runtime overhead for loading and linking. In resource-constrained environments like AVR microcontrollers,
minimizing runtime overhead is crucial for optimal performance.  
**Minimum Resource Utilization**: Due to the constrained resources of AVR microcontrollers, our approach involves interfacing directly with the microcontroller, 
bypassing the use of an operating system (Bare Metal). As a result, there is no system loader capable of dynamically loading libraries onto the stack during runtime.
Dynamic libraries are employed in more powerful microcontrollers such as Raspberry Pi and BeagleBone, where the hardware resources are more abundant 
and can better accommodate the dynamic loading and unloading of libraries.
