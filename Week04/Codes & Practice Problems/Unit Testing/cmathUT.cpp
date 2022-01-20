#include <iostream>

class CMath {
public:
    double pow(double, int);
    double fabs(double);
};

double CMath::pow(double x, int y) {
    double res = x;
    for (int i = 1; i < y; i++) {
        res *= x;
    }

    return res;
}
double CMath::fabs(double x) {
    if (x < 0) { x *= -1; }

    return x;
}

using namespace std;

int main() {
    CMath math;
    // Unit Testing

    if (math.pow(3, 2) != 9) {
        cout << "Expecting 9, but got " << math.pow(3,2) << endl;
    }
    if (math.pow(2,4) != 16) {
        cout << "Expecting 16, but got " << math.pow(2,4) << endl;
    }
    if (math.pow(-2, 4) != 16) {
        cout << "Expecting 16, but got " << math.pow(-2,4) << endl;
    }
    if (math.pow(2,3) != 0) {
        cout << "Expecting 0, but got " << math.pow(2,3) << endl;
    }
    if (math.pow(1, 0) != 1) {
        cout << "Expecting 1, but got " << math.pow(1,0) << endl;
    }

    if (math.fabs(-3) != 3) {
        cout << "WRONG |3| should be 3" << endl;
    }
    if (math.fabs(6) != 6) {
        cout << "WRONG |6| should be 6" << endl;
    }
    if (math.fabs(0) != 0) {
        cout << "WRONG |0| should be 0" << endl;
    }
}






































//class CMath {
//public:
//    double pow(double, int);
//    double fabs(double);
//};
//
//double CMath::pow(double x, int y) {
//    double res = 1;
//    for (int i = 0; i < y; i++) {
//        res *= x;
//    }
//
//    return res;
//}
//double CMath::fabs(double x) {
//    if (x < 0) { x *= -1; }
//
//    return x;
//}
//
//int main() {
//    CMath math;
//    // Unit Testing
//    if (math.pow(3,2) != 9) {
//        cout << math.pow(3,2) << endl;
//        cout << "Should return 9" << endl;
//    }
//    if (math.pow(2,3) != 8) {
//        cout << math.pow(2,3) << endl;
//        cout << "Should return 8" << endl;
//    }
//    if (math.pow(-2, 3) != -8) {
//        cout << math.pow(-2,3) << endl;
//        cout << "Should return -8" << endl;
//    }
//    if (math.pow(1, 0) != 1) {
//        cout << math.pow(1,0) << endl;
//        cout << "Should return 1" << endl;
//    }
//
//    if (math.fabs(-2) != 3) {
//        cout << "Should return 2" << endl;
//    }
//    if (math.fabs(-0.0001) != 0.0001) {
//        cout << "Should return 0.0001" << endl;
//    }
//    if (math.fabs(0) != 0) {
//        cout << "Should return 0" << endl;
//    }
//    if (math.fabs(2) != 2) {
//        cout << "Should return 2" << endl;
//    }
//}
