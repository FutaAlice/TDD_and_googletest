// macro_test.cpp
#include <gtest/gtest.h>

// 定义一个待测试函数
auto add = [](auto a, auto b) { return a + b; };

TEST(Addition, CanAddInt)
{
    EXPECT_EQ(add(2, 2), 4);
}

TEST(Addition, CanAddFloat)
{
    EXPECT_FLOAT_EQ(add(2.4f, 4.2f), 6.6f);
}
