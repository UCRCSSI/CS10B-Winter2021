#include "IntList.h"

void IntList::push_back(int val) {
    Node* newNode = new Node(val);
    // tail = nullptr;
    if (tail == nullptr) {
        head = newNode;
        tail = head;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}































//void IntList::Push_back(int val) {
//    IntNode* newNode = new IntNode(val);
//
//    if (head == nullptr) {
//        head = newNode;
//        tail = newNode;
//    }
//    else {
//        tail = newNode;
//    }
//}
//void IntList::Pop_front() {
//    if (head == nullptr) {
//        return;
//    }
//    else {
//        IntNode* currNode = head;   // pointer
//        head = currNode->next;
//
//        delete currNode;
////        currNode = nullptr;
//    }
//}