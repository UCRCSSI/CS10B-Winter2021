class Person{
private:
    char *name;     // What is this?
    Person *father; // pointer to the father
    Person *mother; // pointer to the mother
    Person **children; // This is similar to how char* argv[] == char** argv == string names[];

public:
    Person(char *name, Person* father, Person* mother);
    ~Person() {
        this->name = nullptr;
        this->father = nullptr;
        this->mother = nullptr;
        this->children = nullptr;
    }
    /* ... */
};