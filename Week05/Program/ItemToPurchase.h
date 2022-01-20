//
// Created by Pika-Sannnnn on 2021/02/05.
//

#ifndef CS10B_WINTER2021_ITEMTOPURCHASE_H
#define CS10B_WINTER2021_ITEMTOPURCHASE_H
#include <iostream>

using namespace std;

class ItemToPurchase {
private:
    string _name;
    string _description;
    int _price;
    int _quantity;
public:
    ItemToPurchase();
    ItemToPurchase(string, string, int, int);

    void setName(string);
    void setDescription(string);
    void setPrice(int);
    void setQuantity(int);
    string name() { return this->_name; }
    string description() { return this->_description; }
    int price() { return this->_price; }
    int quantity() { return this->_quantity; }

    void printItemCost();
    void printItemDescription();
};


#endif //CS10B_WINTER2021_ITEMTOPURCHASE_H
