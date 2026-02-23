#include <iostream>
#include <thread>
#include <mutex>
#include <vector>


int main(int argc, char const *argv[])
{
    std::mutex mtx;
    auto print = [&mtx](int id) {
        mtx.lock();
        std::cout<< "Printing from thread: " << id << '\n';
        mtx.unlock();
    };
    std::thread t1(print);
    std::thread t2(print);
    std::thread t3(print);
    t1.join();
    t2.join();
    t3.join();

    return 0;
}
