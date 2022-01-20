#include "Menu.h"

Menu::Menu(std::string filename) {
    std::ifstream fin(filename);
    std::string name;
    double price;
    while (std::getline(fin, name)) {
//        fin.ignore();
        fin >> price;
        fin.clear();
        fin.ignore();
        fin.ignore();   // extra .ignore() for linux compilation
        this->items.push_back(Food(name, price));
    }
}
std::ostream& operator<<(std::ostream& out, Menu menu) {
    int sz = menu.items.size();
    for (int i = 0; i < sz; i++) {
        out << menu.items.at(i) << std::endl;
    }

    return out;
}