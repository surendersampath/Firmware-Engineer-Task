#include "utility.h"
#include <iostream>
#include <stdexcept>

namespace bitops {

// Constructor
Utility::Utility() {
    // Initialize BITMAP with all zeros
    std::fill(std::begin(BITMAP), std::end(BITMAP), 0);
}

// Destructor
Utility::~Utility() {
    /* UnLock the mutex before destroying the object */
    mtx.unlock();
}

bool Utility::setBit(uint8_t index) 
{

    if (index >= 256) {
        return false;
    }

    std::lock_guard<std::mutex> lock(mtx);
    BITMAP[index / 8] |= (1 << (index % 8));
    return true;
}

// Method to clear the bit at a specific index
bool Utility::clearBit(uint8_t index) 
{
    if (index >= 256) {
        return false;
    }

    std::lock_guard<std::mutex> lock(mtx);
    BITMAP[index / 8] &= ~(1 << (index % 8));
    return true;
}

// Method to get the value of the bit at a specific index
bool Utility::getBit(uint8_t index) 
{
    if (index >= 256) {
        return false;
    }

    std::lock_guard<std::mutex> lock(mtx);
    BITMAP[index / 8] & (1 << (index % 8));
    return true;
}

} // namespace bitops
