#include <iostream>
#include <thread>


void print_thread_id(int id){
    std::cout << "Printing from thread: " << id << '\n';
}
int main(int argc, char const *argv[]){
    std::thread t1(print_thread_id, 0);
    std::thread te(print_thread_id, 1);
    t1.join(); // 等待线程1结束
    return 0;
}
