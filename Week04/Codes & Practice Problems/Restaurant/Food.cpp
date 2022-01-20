#include "Food.h"

std::ostream& operator<<(std::ostream& out, Food food) {
//    out << food.name + ": " << std::endl;
//    out << food.price << std::endl;
    out << food.name << std::endl;
    out << food.price << std::endl;

    return out;
}