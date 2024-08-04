#ifndef UTILITY_H
#define UTILITY_H

// Include the necessary libraries
#include <mutex>

/**
 * \brief Represents a Bit Operations Utility.
 *
 * This class provides utility functions for performing bit operations.
 */
namespace bitops
{
    /**
     * \brief Represents a Bit Operations Utility.
     *
     * This class provides utility functions for performing bit operations.
     */
    class Utility
    {
        private:
            /* Create bit-map to hold data.*/
            uint8_t BITMAP[32];        

            /* Create a mutex to make the class thread-safe. */
            std::mutex mtx;
            
        public:
            /**
             * \brief Default constructor.
             */
            Utility();

            /**
             * \brief Destructor.
             */
            ~Utility();

            /**
             * \brief Set the nth bit.
             *
             * \param index The index of the bit to set.
             * \return True if the bit was set successfully, false otherwise.
             */
            bool setBit(uint8_t index);

            /**
             * \brief Clear the nth bit at a specific index.
             *
             * \param index The index of the bit to clear.
             * \return True if the bit was cleared successfully, false otherwise.
             */
            bool clearBit(uint8_t index);

            /**
             * \brief Get the value of the nth bit at a specific index.
             *
             * \param index The index of the bit to get.
             * \return The value of the bit at the specified index.
             */
            bool getBit(uint8_t index);
    };

} // namespace bitops

#endif // UTILITY_H
