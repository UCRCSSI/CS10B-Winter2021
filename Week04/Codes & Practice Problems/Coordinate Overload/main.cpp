#include <iostream>
#include "Point.h"

using namespace std;

int main() {
    Point a(3, 4);
    Point b(4, 3);

    cout << a << " + " << b << " = " << a+b << endl;
    cout << a << " - " << b << " = " << a-b << endl;
}