#include <iostream>

struct Point{
    int x;
    int y;

    void print() {
        std::cout << "x = " << x << '\n';
        std::cout << "y = " << y << '\n';
    }
};

int main(int argc, char const *argv[])
{
    Point p1 = {.x = 1, .y = 2};
    p1.print();

    Point p2;
    p2.x = 1000;
    p2.y = 2000;
    p2.print();
    return 0;
}
