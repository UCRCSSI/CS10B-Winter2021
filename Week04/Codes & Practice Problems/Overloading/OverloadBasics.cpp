#include <iostream>
#include <string>

using namespace std;

class Item {
private:
    string name;
    double price;
public:
    Item(string name, double price) : name(name), price(price) {}
    // overload + operator to add the price of two items
    Item operator+(Item rhs) {
        double totPrice = this->price + rhs.price;
        string name = this->name + " & " + rhs.name;
        Item Total(name,totPrice);
        Total << rhs.price;

        return Total;// Item(name, totPrice);
    }
    Item& operator<<(double price) {    // modify the price of the itme
        this->price = price;

        return *this;
    }
    friend ostream& operator<<(ostream& out, Item rhs) {
        out << rhs.name << ": " << rhs.price;   // [out] name: price

        return out; //
    }
    friend istream& operator>>(istream& in, Item& rhs) {
        in >> rhs.price;

        return in; //
    }
};

int main() {
    Item Coffee("Coffee", 3.56);
    Item Cookie("Cookie", 2.34);
    Item Purchase = Coffee + Cookie;
    cout << Coffee + Cookie << endl;

    Coffee << 90; // setter function
    cout << Coffee << endl;

    cin >> Coffee;
    cout << Coffee << endl;
}




























//class Item {
//private:
//    string name;
//    double price;
//public:
//    Item(string name, double price) : name(name), price(price) {}
//    Item operator+(const Item& rhs) {
//        string name = this->name + " & " + rhs.name;
//        double price = this->price + rhs.price;
//        Item ret(name, price);
//
//        return ret;
//    }
//    Item& operator<<(double price) {
//        this->price = price;
//
//        return *this;
//    }
//    friend ostream& operator<<(ostream& out /*cout*/, Item rhs /*Coffee*/) {
//        out << rhs.name << ": " << rhs.price;   // [out] Coffee: 64.36
//
//        return out;
//    }
//    friend istream& operator>>(istream& in, Item& rhs) {
//        double temp;
//        in >> temp;
//        rhs.price = temp;
//
//        return in;
//    }
//};
//
//int main() {
//    Item Coffee("Coffee", 3.56);
//    Item Cookie("Cookie", 2.34);
//    Item Purhcase = Coffee + Cookie;
//
//    Coffee << 64.36;
//    cout << Coffee + Cookie << endl;
//    cin >> Coffee;
//    cout << Coffee << endl;
//}