#ifndef CS10B_WINTER2021_MENU_H
#define CS10B_WINTER2021_MENU_H
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Food.h"

class Menu {
protected:
    std::vector<Food> items;
public:
    Menu(std::string);
    friend std::ostream& operator<<(std::ostream&, Menu);
};


#endif //CS10B_WINTER2021_MENU_H
