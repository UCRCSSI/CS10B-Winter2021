#ifndef _NUMBER1_H_
#define _NUMBER1_H_
#include <iostream>
#include <string>

struct Student {
    std::string name;
    unsigned age;
    unsigned schoolYear;

    std::string GetName() {
        return name;
    }
    unsigned GetAge() {
        return age;
    }
    unsigned GetYear() {
        return schoolYear;
    }
};

#endif
