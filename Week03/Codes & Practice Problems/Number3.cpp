// Identify all parts of this code i.e. label each part of the class and how it's used in main
// What is this class grouping? What should the class actually be called?
#include <iostream>
#include <string>

using namespace std;

class M {
private:
    string A;
    int B;
    double C;
public:
    M() {
        this->A = "";
        this->B = 0;
        this->C = 0;
    }
    M(string A, int B, double C) {
        this->A = A;
        this->B = B;
        this->C = C;
    }
    string X() { return this->A; }
    int Y() { return this->B; }
    double Z() { return this->C; }
};

int main() {
    M ex("Starbucks", 300, 3.8);

    cout << ex.X() << " - " << ex.Z() << " (" << ex.Y() << ")" << endl;
}