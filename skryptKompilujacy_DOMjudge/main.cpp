#include <iostream>
#include <gtest/gtest.h>
using namespace ::testing;

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    GTEST_FLAG(print_time) = false;
    return RUN_ALL_TESTS();
}