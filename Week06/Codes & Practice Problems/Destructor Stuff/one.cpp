class Simple {
private:
    int* ptr1;
    int* ptr2;
public:
    Simple() : ptr1(new int), ptr2(ptr1) {}
    ~Simple() {
        ptr1 = nullptr;
        ptr2 = ptr1;
        delete ptr1;
        delete ptr2;
    }
};