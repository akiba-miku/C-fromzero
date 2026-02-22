#include <iostream>
#include <array>
#include <algorithm>

void print(auto arr){
    for(const auto& v: arr){
        std::cout << v << ' ';
    }
    std::cout << '\n';
}
int main(int argc, char const *argv[])
{
    std::array<int, 5> arr = {51,0, 98,7,20};

    std::sort(arr.begin(), arr.end());

    print(arr);

    std::sort(arr.begin(), arr.end(), std::greater<int>());

    print(arr);

    return 0;
}
