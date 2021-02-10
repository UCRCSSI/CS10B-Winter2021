struct Employee {
    char* name;
    int id;
    Employee* next;
    Employee* prev;
    Employee(string name = "EMPTY", int id = 0) : name(name), id(id), next(0), prev(0) {}
};

class Company {
private:
    Employee* head;
    Employee* tail;
public:
    Company();
    ~Company() {
        while (tail != nullptr) {
            Employee* tempNext = head->next;
            delete tail;
            tail = tempNext;
        }
    }
    /* ... */
};

/* Example List
 *
 * [Jason] <---> [Honoka] <---> [WuXing] <---> [Juan] <---> [Michael] <---> [Christopher]
 *
 */