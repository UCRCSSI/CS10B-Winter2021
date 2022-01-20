//
// Created by Pika-Sannnnn on 2021/02/05.
//

#ifndef CS10B_WINTER2021_SHOPPINGCART_H
#define CS10B_WINTER2021_SHOPPINGCART_H
#include <iostream>
#include <vector>
#include "ItemToPurchase.h"

using namespace std;

class ShoppingCart {
private:
    string _customerName;
    string _currentDate;
    vector<ItemToPurchase> _cartItems;
public:
    ShoppingCart();
    ShoppingCart(string, string);

void addItem(ItemToPurchase);
    void removeItem(string);
    void modifyItem(ItemToPurchase);
    string customerName() { return this->_customerName; }
    string date() { return this->_currentDate; }
    int numItemsInCart() { return this-> _cartItems.size(); }
    int costOfCart();

    void printTotal();
    void printDescriptions();
};


#endif //CS10B_WINTER2021_SHOPPINGCART_H
