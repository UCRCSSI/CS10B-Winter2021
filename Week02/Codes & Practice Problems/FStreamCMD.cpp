#include <iostream>
#include <fstream> // library for file stream

using namespace std;

int main(int argc, char* argv[]) {  // char* is a c-string
        // argc = total number of arguments
        // Note: ./a.out is the first argument
//    if (!(argc > 1)) {    // Always check user inputted enough arguments
//        return 1;
//    }
    cout << argc << endl;

//    ofstream fout;  // output file stream
//    ifstream fin;   // input file stream
//
//    fin.open("text.txt");     // opening a file.
        // You can also open a file when declaring the stream i.e. ofstream fout("text.txt");
//    if (!fin.is_open()) {     // .is_open() returns a bool
//        cout << "OH NOES! FILE BAD! FIX ME NOW!" << endl;
//    }
//    int var;
//    fin >> var;
//
//    fin.close();
//
//    fout.open("text.txt", ios::app);    // ios::app -> appends to end of file rather than override
        // Opening a non-existent file using ofstream will create the file for you
//    if (!fout.is_open()) {
//        cout << "OH NOES! FILE BAD! FIX ME NOW!" << endl;
//    }
//
//    fout << 100 << endl;  // Writing out to the file
//
//    fout.close();
//
//    fstream fs("text.txt", ios::out | ios::app);   // a fstream is like ifstream/ofstream, just without specified type of operation
        // We declared fstream fs as ios::out (essentially making it the same as ofstream) AND to append to end of file.
//    return 0;
}