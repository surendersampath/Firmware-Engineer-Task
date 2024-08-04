#include <gtest/gtest.h>
#include "utility.h"

TEST(UtilityTest, SetBit)
{
    bitops::Utility utility;
    EXPECT_TRUE(utility.setBit(5)); // Set bit at index 5
    EXPECT_TRUE(utility.getBit(5)); // Check if bit at index 5 is set
}

TEST(UtilityTest, ClearBit)
{
    bitops::Utility utility;
    utility.setBit(5);    // Set bit at index 5
    utility.clearBit(5);  // Clear bit at index 5
    EXPECT_FALSE(utility.getBit(5));  // Check if bit at index 5 is cleared
}

TEST(UtilityTest, GetBit)
{
    bitops::Utility utility;
    utility.setBit(100);              // Set bit at index 7   
    EXPECT_TRUE(utility.getBit(100));// Check if bit at index 7 is cleared
}
