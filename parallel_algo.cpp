#include <iostream>
#include <vector>

#include <numeric>   // for std::reduce
#include <execution> // seq, par
int main(int argc, char const *argv[])
{
    std::vector<int> my_vector(1 << 30, 1);
    // auto r = std::reduce(my_vector.begin(), my_vector.end(), 0); 默认顺序执行，单线程
    auto r = std::reduce(std::execution::par_unseq, my_vector.begin(), my_vector.end(), 0); //并发执行

    return 0;
}
