#include <iostream>
#include <array>

int main(int argc, char const *argv[])
{
    std::array<int, 3> arr = {1,2,3};
    for(auto v = arr.begin(); v < arr.end(); v++){
        std::cout << *v << ' ';
    }    
    std::cout << '\n';

    for(const auto& v: arr){
        std::cout << v << ' ';
    }
    std::cout << '\n';
    return 0;
}
