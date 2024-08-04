# About
Thread safe class for managing large dataset.
 
 ## API's

- **Set Bit**: Set the value of a specific bit.
- **Clear Bit**: Clear the value of a specific bit.
- **Get Bit**: Retrieve the value of a specific bit.

## Installation

To use the Bit Operations Utility, include the `utility.h` file in your project.


## Documentation

This is generated using doxygen. [Click here to open](https://surendersampath.github.io/Firmware-Engineer-Task/) .
To re-run doxygen
```
doxygen Doxyfile
```

## Usage - To compile and run the application.
```
mkdir build
cd build 
cmake .. 
./main/main_exe 
```
 
## Usage - To compile and run the unit tests using ctest.
```
mkdir build
cd build 
cmake .. 
ctest
```
![image](https://github.com/user-attachments/assets/72c2e067-ccfc-482a-b125-6b0eb081dc20)

## Usage - To run inside codespace.

Open codespace from the main branch. It will take a moment to pull images and build for the first time.
Commands have been configured within VS code to build and run app/tests.

![image](https://github.com/user-attachments/assets/605a0e17-a949-42c1-9b98-bebdfe5ab478)


## Continous Integeration and Testing
This repo uses github actions to perform automated test on commit.
![image](https://github.com/user-attachments/assets/11bccd33-ca78-4632-af21-174440e9f1a0)


