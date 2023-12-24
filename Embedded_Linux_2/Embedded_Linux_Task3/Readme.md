# Embedded Linux 2 Task 3 Submission

## Sysroot Overview:

The Sysroot serves as a critical component within the embedded Linux environment. It is a file system uploaded onto the microcontroller, interfacing with the Linux operating system. Analogous to the root file system on x86 machines.

### Directory Structure:

The Sysroot contains two principal directories, each serving a distinct purpose:

#### 1. `lib` Directory:

The `lib` directory is dedicated to housing a comprehensive array of both dynamic and static libraries. Among its notable inclusions are fundamental libraries such as `libstdc++` and `libgcc`. 

#### 2. `usr` Directory:

The `usr` directory contains four subdirectories:

- **`bin` Directory:** This subdirectory contains essential binary executables.

- **`Include` Directory:** Herein lies a collection of header files, to be compatiable with user-specific libraries and applications.

- **`lib` Directory:** Similar to its counterpart in the root, this subdirectory extends the library repository within the Sysroot. It provides a designated space for user-specific libraries that augment the capabilities of the microcontroller.

- **`share` Directory:** This directory contains shared data, configurations, and resources vital to the functioning of user applications.

## Binutil

In addition to the Sysroot, the utilization of `binutils` further enhances the development and deployment process. `binutils` is a collection of binary utilities, including essential tools for managing binary files, such as linking, assembling, and object file manipulation.

#### Notable Components:

- **`ld` (GNU Linker):** Responsible for linking together various object files and libraries to create the final executable.

- **`as` (GNU Assembler):** Assembles source files into object files.

- **`objcopy`:** Copies and translates object files.

- **`objdump`:** Displays information about object files.

