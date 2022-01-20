// Identify all parts of this code i.e. label each part of the class and how it's used in main
// What is this class grouping? What should the class actually be called?
#include <iostream>
#include <string>

using namespace std;

class M {   // Establishment Rating -> Establishment    // Declaring Class
private:    // Setting Private visibility
    string A;   // name
    int B;      // numRatings
    double C;   // avgRating
public:     // Setting Public visibility
    M() {       // Establishment()  // Default Constructor
        this->A = "";
        this->B = 0;
        this->C = 0;
    }
    M(string A, int B, double C) {  // Establishment(string name, int numRatings, avgRatings)   // Overrided Constructor
        this->A = A;
        this->B = B;
        this->C = C;
    }
    string X() { return this->A; }  // GetName()        // Getter Function/Method
    int Y() { return this->B; }     // GetNumRatings()  // Getter Function/Method
    double Z() { return this->C; }  // GetAvgRatings()  // Getter Function/Method
};

int main() {
    M ex("Starbucks", 300, 3.8);    // M Starbucks  // Object Declaration

    cout << ex.X() << " - " << ex.Z() << " (" << ex.Y() << ")" << endl; // Using Methods
}