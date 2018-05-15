#include <iostream>
#include <gtest/gtest.h>

class FooEnvironment
        : public testing::Environment
{
public:
    virtual void SetUp()
    {
        std::cout << "全局事件 SetUP" << std::endl;
    }
    virtual void TearDown()
    {
        std::cout << "全局事件 TearDown" << std::endl;
    }
};


int main(int argc, char* argv[])
{
    // 注册全局事件
    testing::AddGlobalTestEnvironment(new FooEnvironment);

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
