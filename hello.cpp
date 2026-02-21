#include <iostream>

// 预处理 -> 编译 -> 汇编 -> 链接
// g++ -E hello.cpp > out.txt
// g++ -c hello.cpp
// objdump -d hello.o # 反汇编
// g++ -o hello.cpp hello.o # 指定生成对应文件名的可执行文件
int main(int argc, char const *argv[])
{
    std::cout << "Hello, World!\n";
    return 0;
}
