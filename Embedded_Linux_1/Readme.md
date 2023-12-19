# Embedded Linux Task 1 Solution - Static and Dynamic Library for Simple Calculator

## 1. Using ldd Command

### - Main executable (main.exe):
The `ldd` command indicates that the main executable is not dynamically executable as expected.

### - Test executable (test):
The `ldd` command reports that it is dynamically linked but cannot find the required library.

### - Test2 executable (test2):
The `ldd` command successfully identifies the library because it has been added to the runtime path (rpath).

![ldd Output](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/e4aeb242-52d6-4cf3-b0c5-f748c10ebaeb)

## 2. Using file Command

### - Main executable (main.exe):
The `file` command states that it is statically linked.

### - Test and Test2 executables (test and test2):
The `file` command reports that they are dynamically linked.

![file Output](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/ee46ea37-9074-42c2-9421-c6012fe760be)

## 3. Using objdump -t or -x Command

### - Main executable (main.exe):
Observing the output of `objdump -t`, we can see that all functions (add, sub, ...) are placed in the .text area, indicating that they were found during compile time.

![objdump Output for main.exe](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/2e9a0bff-1696-47fa-b8eb-f633b560261b)

### - Test and Test2 executables (test and test2):
The functions are listed as Undefined in the symbol table with no address, indicating that they will be resolved during the runtime of the application.

![objdump Output for test and test2](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/2a3321a0-4f6f-4a1f-8350-7577a7003dff)

## 4. Using size Command

We can observe a significant difference in sizes between the two files. The size of the statically linked file is larger than the dynamically linked one.

![size Command Output](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/696406e6-1774-450d-a4cd-29e7597ad938)

Feel free to explore the provided screenshots for a detailed analysis of each step.
