#include <gtest/gtest.h>

auto add = [](auto a, auto b) { return a + b; };

class AddTestWithParam
        : public ::testing::Test
        , public ::testing::WithParamInterface<int>
{
};

TEST_P(AddTestWithParam, HandleReturn)
{
    int n = GetParam();
    EXPECT_EQ(add(n, 10), n + 10);
}

INSTANTIATE_TEST_CASE_P(EQUAL,
                        AddTestWithParam,
                        testing::Values(3, 5, 11, 23, 17));
