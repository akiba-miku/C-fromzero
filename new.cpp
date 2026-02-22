#include <iostream>

int main(int argc, char const *argv[])
{
    int *int_ptr = new int;
    *int_ptr = 10;
    std::cout << " Value: " << *int_ptr << '\n';
    std::cout << " Addr: " << int_ptr << '\n';

    delete int_ptr;

    int_ptr = new int[10];
    int_ptr[3] = 10;
    std::cout << " Value: " << int_ptr[3] << '\n';
    std::cout << " Addr: " << int_ptr + 3 << '\n';
    return 0;
}
