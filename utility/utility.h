#ifndef UTILITY_H
#define UTILITY_H

// Include the necessary libraries
#include <mutex>

namespace bitops
{
    class Utility
    {
        private:
            /* Create bit-map to hold data.*/
            uint8_t BITMAP[32];        

            /* Create a mutex to make the class thread-safe. */
            std::mutex mtx;
            
        public:
            // Constructor and Destructor
            Utility();
            ~Utility();

            /* Method to set the nth bit.*/
            bool setBit(uint8_t index);

            /* Method to clear the nth at a specific index. */
            bool clearBit(uint8_t index);

            /* Method to get the value of the nthbit at a specific index. */
            bool getBit(uint8_t index);
    };

} // namespace bitops

#endif // UTILITY_H
