#ifndef CS10B_WINTER2021_POINT_H
#define CS10B_WINTER2021_POINT_H
#include <iostream>

class Point {
private:
    int x;
    int y;
public:
    Point() : x(0), y(0) {}
    Point(int x, int y) : x(x), y(y) {}
    // adding components together
    Point operator+(Point);
    Point operator-(Point);
    friend std::ostream& operator<<(std::ostream& out, Point in) {
        out << "(" << in.x << "," << in.y << ")";

        return out;
    }
};


#endif //CS10B_WINTER2021_POINT_H
