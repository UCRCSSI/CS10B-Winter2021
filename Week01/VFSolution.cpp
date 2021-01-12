//
// Created by Pika-Sannnnn on 2021/01/12.
//
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

vector<bool> GetValsAsBool();
bool CheckBools(vector<bool>&);

int main() {    // "2"
    cout << "Enter 8 integers: ";
    vector<bool> a = GetValsAsBool();   // 1

    for (int i = 0; i < 8; i++) {   // O(8)
        cout << a[i] << " ";
    }
    cout << endl;

    if (CheckBools(a)) {            // O(n) -> O(8)
        cout << "All even" << endl;
    }
}

vector<bool> GetValsAsBool() {      // 1 variable
    vector<bool> retVect;
    for (int i = 0; i < 8; i++) {   // O(8)
        int input = 0;
        cin >> input;
        if (input % 2 == 0) {
            retVect.push_back(true);
        }
        else {
            retVect.push_back(false);
        }
    }

    return retVect;
}
bool CheckBools(vector<bool>& a) {  // 0 variables
    for (int i = 0; i < 8; i++) {   // O(8)
        if (!a[i]) { return false; }
    }

    return true;
}