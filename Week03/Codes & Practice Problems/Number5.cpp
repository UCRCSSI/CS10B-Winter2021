#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string name;
    int age;
};

class School {
private:
    vector<Student> students;
    int numStudents;
public:
    School();
    void AddStudent(string, int);
    void PrintStudents() const;
};

School::School() { numStudents = 0; }
void School::AddStudent(string name, int age) {
    Student newStu;
    newStu.name = name;
    newStu.age = age;

    students.push_back(newStu);
    this->numStudents++;
}
void School::PrintStudents() const {
    for (int i = 0; i < numStudents; i++) {
        cout << students.at(i).name << ": " << students.at(i).name << " years old." << endl;
    }
}

int main() {
    School UCR;
    string name;
    int age;

    cin >> name;
    while (name != "q") {
        cin >> age;
        UCR.AddStudent(name, age);
        cin >> name;
    }

    UCR.PrintStudents();
}
