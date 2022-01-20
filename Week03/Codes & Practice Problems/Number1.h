#ifndef _NUMBER1_H_
#define _NUMBER1_H_
#include <iostream>
#include <string>

struct Student {    // struct declaration (similar to class, but default public)
    std::string name;   // variable
    unsigned age;       // variable
    unsigned schoolYear;// variable

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
