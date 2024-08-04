#include "utility.h"
#include <string>

// Constructor
Utility::Utility() {
    // Constructor implementation
}

// Destructor
Utility::~Utility() {
    // Destructor implementation
}

// A sample member function that returns a greeting message
std::string Utility::getGreeting() const {
    return "Hello from Utility!";
}

// A sample member function that adds two integers
int Utility::add(int a, int b) const {
    return a + b;
}
