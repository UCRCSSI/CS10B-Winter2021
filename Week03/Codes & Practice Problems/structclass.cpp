// What is a struct?
    // A custom type
    // Group related information
    // Can hold data members
    // Public by default
// What are classes?
    // Buffed Structs
    // Private by default
#include <iostream>

class Money {  // Created group called Money (data type)
private:
    int dollar;
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    // helper functions/methods
public:
    void setDollar(int dollar);
    int getDollar() { return this->dollar; }
};

Money Money::setDollar(int dollar) {
    this->dollar = dollar;
}

int main() {
    Money wallet;
    wallet.setDollar(17);
    std::cout << wallet.dollar << std::endl;
}

// string   // .at()
// vector   // .at()
// streams -> iostream/fstream/strings -> istream/ostream/ofstream/ifstream.....

// .to_lower() // returns lower value

































//// What is a struct?
//    // Defining your own type
//    // Simplify code i.e. feet and inches (measurements)
//        // group
//    // default public
//// Classes
//    // everything struct does
//    // default private
//#include <vector>
//#include <string>
//
//using namespace std;
//
//struct Money {
//    int numDimes;
//    int numNickels;
//    int numPennies;
//};
//
//Money calc(Money& a) {
//    Money m;
//
//    return m;
//}
//
//int main() {
//    Money me;   // object declaration
//    vector<Money> a;
//
//    me.numDimes;
//}