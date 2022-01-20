#ifndef CS10B_WINTER2021_FOOD_H
#define CS10B_WINTER2021_FOOD_H
#include <iostream>
#include <string>

class Food {
protected:
    std::string name;
    double price;
public:
    Food(std::string name, double price) : name(name), price(price) {}
    friend std::ostream& operator<<(std::ostream&, Food);
};


#endif //CS10B_WINTER2021_FOOD_H
