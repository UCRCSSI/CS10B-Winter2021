//
// Created by Pika-Sannnnn on 2021/02/05.
//
#include <iostream>
#include "ShoppingCart.h"
#include "ItemToPurchase.h"

using namespace std;

int main() {
    string name;
    string date;
    cout << "Enter customer's name: ";
    getline(cin, name);
//    cin.ignore();
    cout << "Enter today's date: ";
    getline(cin, date);

    ShoppingCart(name, date);
    cout << endl;
    cout << "Customer's name: " << name << endl;
    cout << "Today's date: " << date << endl;
//    ItemToPurchase a("Chicken", "Meat", 20, 3);
//    ItemToPurchase b("Steak", "Meat", 40, 1);
//    ItemToPurchase c("Pizza", "Italian", 3, 10);
//    ItemToPurchase d("Cake", "Dessert", 10, 2);
//    ShoppingCart cart("John", "March 3, 2020");
//
//    cart.addItem(a);
//    cart.addItem(b);
//    cart.addItem(c);
//    cart.addItem(d);
//
//    cart.printTotal();
//    cart.removeItem("Chicken");
//    cart.printTotal();
//    ItemToPurchase change("Steak", "Deli", 100, 1);
//    cart.modifyItem(change);
//    cart.printTotal();
}