#include <iostream>

struct Point{
    int x;
    int y;
    Point() : x(0), y(0){}
    Point(int x, int y) :x(x), y(y){
    }
    void print() const {
        std::cout << "x = " << x << '\n';
        std::cout << "y = " << y << '\n';
    }
};

int main(int argc, char const *argv[])
{
    Point p1(1, 2);
    p1.print();

    return 0;
}
