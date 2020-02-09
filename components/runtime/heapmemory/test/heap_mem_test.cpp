
#include "gtest/gtest.h"
#include "heapmem.hpp"

// Creating a heap object
TEST(TestHeap, test0)
{
    auto x = HeapMemoryManager(10);
    ASSERT_EQ(x.GetSize(), 10);
}

// Copy Construction
TEST(TestHeap, test1)
{
    auto x = HeapMemoryManager(10);
    ASSERT_EQ(x.GetSize(), 10);
    HeapMemoryManager y(x);
    ASSERT_EQ(y.GetSize(), 10);
    ASSERT_EQ(x.GetSize(), 10);
}