#include "Point.h"

Point Point::operator+(Point rhs) {
    Point ret;
    ret.x = this->x + rhs.x;
    ret.y = this->y + rhs.y;

    return ret;
}
Point Point::operator-(Point rhs) {
    Point ret;
    ret.x = this->x - rhs.x;
    ret.y = this->y - rhs.y;

    return ret;
}
