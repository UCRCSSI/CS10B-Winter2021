int* Foo() {
    int* a = nullptr;
    int* b = nullptr;
    int* c = new int;
    Node* head = new Node;

    a = new int;
    b = c;
    delete b;
    c = a;
    Node* ptr;
    ptr = head;
    b = ptr->numptr;
    ptr->numptr = a;    
    a = b;
    delete c;
    c = a;
}