#include <iostream>

// 实现函数重载的关键是， 保证参数序列不同。
// 函数名相同 ， 参数列表不同。 仅凭借函数返回类型不同是无法区分的
// 使用Linux命令工具 明白编译器是如何区分不同的函数
// g++ -o fun function_overloading.cpp
//  nm fun | grep "print"
/**
00000000000011e9 T _Z5printc
00000000000012d7 T _Z5printd
0000000000001286 T _Z5printf
0000000000001239 T _Z5printi
 */
using namespace std;


void print(char c){
    cout << " char size " << c << endl;
}

void print(int c){
    cout << " int size " << c << endl;
}

void print(float c){
    cout << " float size " << c << endl;
}

void print(double c){
    cout << " double size " << c << endl;
}
int main(int argc, char const *argv[])
{
    char a = 'a';
    int b = 10;
    float c = 123.1234f;
    double d = 114514.991902;

    print(a);
    print(b);
    print(c);
    print(d);

    return 0;
}
