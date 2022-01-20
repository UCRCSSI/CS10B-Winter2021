//
// Created by Pika-Sannnnn on 2021/02/05.
//

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase() {
    this->_name  = "";
    this->_description = "";
    this->_price = 0;
    this->_quantity = 0;
}
ItemToPurchase::ItemToPurchase(string n, string d, int p, int q) {
    this->_name = n;
    this->_description = d;
    this->_price = p;
    this->_quantity = q;
}

void ItemToPurchase::setName(string name) {
    this->_name = name;
}
void ItemToPurchase::setDescription(string desc) {
    this->_description = desc;
}
void ItemToPurchase::setPrice(int price) {
    this->_price = price;
}
void ItemToPurchase::setQuantity(int quantity) {
    this->_quantity = quantity;
}

void ItemToPurchase::printItemCost() {
    cout << this->name() << " " << this->quantity() << " @ $" << this->price() << " = $" << this->price() * this->quantity() << endl;
}
void ItemToPurchase::printItemDescription() {
    cout << this->name() << ": " << this->_description << endl;
}