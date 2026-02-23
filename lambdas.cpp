#include <iostream>
#include <vector>
#include <algorithm> 

int main(int argc, char const *argv[])
{
    // 1. Lambda 表达式：初始化捕获 (C++14)
    auto is_dividend_by_10 = [divisor=10](int dividend){
        return dividend % divisor == 0;
    };

    std::vector<int> my_vector = {41, 20, 89, 0, 10};

    // 2. C++20 Ranges 查找：find_if 
    auto itr = std::ranges::find_if(my_vector, is_dividend_by_10);

    // 3. 检查迭代器是否有效
    if (itr != my_vector.end()) {
        std::cout << *itr << std::endl; 
    }

    return 0;
}