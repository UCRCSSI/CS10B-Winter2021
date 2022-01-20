//
// Created by Pika-Sannnnn on 2021/02/05.
//

#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() : _cartItems(0){
    this->_customerName = "none";
    this->_currentDate = "January 1, 2016";
}
ShoppingCart::ShoppingCart(string name, string date) : _customerName(name), _currentDate(date), _cartItems(0) {}

void ShoppingCart::addItem(ItemToPurchase newItem) {
    _cartItems.push_back(newItem);
}
void ShoppingCart::removeItem(string name) {
    vector<ItemToPurchase>::iterator it = _cartItems.begin();
    for (; it != _cartItems.end(); it++) {
        if ((*it).name() == name) {
            break;
        }
    }

    if (it == _cartItems.end()) {
        cout << "Item not found in car. Nothing removed." << endl;
    }
    else {
        _cartItems.erase(it);
    }
}
void ShoppingCart::modifyItem(ItemToPurchase searchItem) {
    string name = searchItem.name();
    vector<ItemToPurchase>::iterator it = _cartItems.begin();
    for (; it != _cartItems.end(); it++) {
        if ((*it).name() == name) {
            break;
        }
    }

    if (it == _cartItems.end()) {
        cout << "Item not found in cart. Nothing modified." << endl;
    }
    else {
        if (!(searchItem.description() == "none" && searchItem.price() == 0 && searchItem.quantity())) {
            (*it).setDescription(searchItem.description());
            (*it).setPrice(searchItem.price());
            (*it).setQuantity(searchItem.quantity());
        }
    }
}
int ShoppingCart::costOfCart() {
    int total = 0;
    int sz = this->_cartItems.size();

    for (int i = 0; i < sz; i++) {
        total += _cartItems[i].price();
    }

    return total;
}
void ShoppingCart::printTotal() {
    cout << this->customerName() << "'s Shopping Cart - " << this->date() << endl;
    cout << "Number of Items: " << this->_cartItems.size() << endl;
    cout << endl;

    if (_cartItems.empty()) {
        cout << "SHOPPING CART IS EMPTY" << endl;
    }
    else {
        for (int i = 0; i < _cartItems.size(); i++) {
            _cartItems.at(i).printItemCost();
        }
        cout << "Total: $" << this->costOfCart() << endl;
    }
}
void ShoppingCart::printDescriptions() {
    cout << this->customerName() << "'s Shopping Cart - " << this->date() << endl;
    cout << "Number of Items: " << this->_cartItems.size() << endl;
    cout << endl;
    cout << "Item Descriptions:" << endl;

    for (int i = 0; i < _cartItems.size(); i++) {
        _cartItems.at(i).printItemDescription();
    }
}