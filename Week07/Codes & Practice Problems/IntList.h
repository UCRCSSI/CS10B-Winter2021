#ifndef CS10B_WINTER2021_INTLIST_H
#define CS10B_WINTER2021_INTLIST_H
#include <iostream>
using namespace std;

struct Node{
    int num;
    Node* next;
    Node(int num) : num(num), next(0) {}
};

class IntList {
private:
    Node* head;
    Node* tail;
public:
    IntList() : head(0), tail(0) {}
    void PrintList() {
        Node* currNode = head;
        if (currNode == nullptr) {
            cout << "List Empty" << endl;
            return;
        }
        while (currNode != nullptr) {
            cout << currNode->num << " ";
            currNode = currNode->next;
        }
        cout << endl;
    }
    void push_back(int);
};

#endif //CS10B_WINTER2021_INTLIST_H



























//
//class IntList {
//private:
//    IntNode* head;
//    IntNode* tail;
//public:
//    IntList() : head(0), tail(0) {} // head and tail = nullptr
//    void Push_back(int);
//    void Pop_front();
//};
//
//struct IntNode {
//    int num;
//    IntNode* next;
//    IntNode(int num) : num(num), next(0) { }
//};
