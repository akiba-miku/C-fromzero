
#include <iostream>

//声明变量 -> 告诉编译器分配内存
//赋值 -> 将数据写入内存
int main(int argc, char const *argv[])
{
    int a;
    int b;
    int sum;
    /**
     * float a = 1.2f;
     * double b = 1.0;
     * char c = 'a';
     * bool is_true = true; 
     */
    a = 5;
    b = 10;

    sum = a + b;
    /*
    + - * / < > <= >= = != ! & | ^ && ||
    */
    
    std::cout << "The sum of " << a << " and " << b << " is " << sum << std::endl;

    const char *some_string = "Hello, C Plus Plus";
    std::cout << some_string << std::endl;
    return 0;
}
