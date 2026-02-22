#include <iostream>
#include <memory> // for unique_pointer

int main(int argc, char const *argv[])
{
    std::unique_ptr<int[]> ptr(new int[10]);
    for(int i = 0; i < 10; i++){
        ptr[i] = i * i;
    }
    std::cout << ptr[4] << '\n';
    std::cout << ptr[7] << '\n';
    return 0;
}
