/**
 * @file main.cpp
 * @brief This file contains the main function for the Firmware Engineer Task.
 *
 * The main function initializes an instance of the `bitops::Utility` class and performs various operations on it.
 * It sets a bit, retrieves the value of a bit, and clears a bit using the `setBit`, `getBit`, and `clearBit` functions respectively.
 * The results of these operations are then printed to the console.
 *
 * @return 0 indicating successful execution of the program.
 */

#include <iostream>
#include <string>
#include <utility.h>

using namespace std;


int main() {
    bitops::Utility utility;
    utility.setBit(234);
    cout << utility.getBit(10) << endl;
    utility.clearBit(10);
    cout << utility.getBit(10) << endl;
    cout << utility.getBit(234) << endl;
    
    return 0;
}