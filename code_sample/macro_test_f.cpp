#include <gtest/gtest.h>

class FooTest :
        public testing::Test {
public:
    static void SetUpTestCase() {}
    static void TearDownTestCase() {}
    virtual void SetUp() {}
    virtual void TearDown() {}
};

TEST_F(FooTest, Test1)
{
}

TEST_F(FooTest, Test2)
{
}
