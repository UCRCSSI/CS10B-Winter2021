// Identify all parts of this code i.e. label each part of the class and how it's used in main
// What is this class grouping? What should the class actually be called?
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

class M {
private:
    string A;
    int B;
    string C;
public:
    M();
    void SetA(string A) { this->A = A; }
    void SetB(int B) { this->B = B; }
    void SetC(string C) { this->C = C; }
    void Print();
};

M::M() {
    this->A = "NULL";
    this->B = 1;
    this->C = "UNDECLARED";
}
void M::Print() {
    cout << this->A << endl;
    cout << "Info: " << this->C << " Major (" << this->B << ")" << endl;
}

int main() {
    vector<M> vect(10);
    string a;
    int b;
    string c;
    ostringstream ssout;


    for (int i = 0; i < 10; i++) {
        cin >> a;
        if (a == "q") { break; }
        ssout << a;
        cin >> a;
        ssout << " " << a;
        vect.at(i).SetA(ssout.str());

        cin >> b;
        vect.at(i).SetB(b);

        cin.ignore();
        getline(cin, c);
        vect.at(i).SetC(c);
    }

    for (int i = 0; i < 10; i++) {
        vect[i].Print();
    }

}