#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string a = "hello 36";
    istringstream ssin(a);
    string buff;
    int num;

    ssin >> buff >> num;    // hello  36
    cout << num << endl;    // print num;
}
