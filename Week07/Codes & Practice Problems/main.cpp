#include <iostream>
#include "IntList.h"
using namespace std;

//class Node {
//public:
//    int num;
//    Node* next;
//    Node(int num) : num(num), next(0) {}
//};
//
//class List {
//private:
//    Node* head;
//    Node* tail;
////    int size;
//public:
//    List() : head(0), tail(0) {}
//    void PrintList() {
//        Node* currNode = head;
//        if (currNode == nullptr) {
//            cout << "List Empty" << endl;
//            return;
//        }
//        while (currNode != nullptr) {
//            cout << currNode->num << " ";
//            currNode = currNode->next;
//        }
//        cout << endl;
//    }
//    void Insert(int, int index = 0);
//    void Remove(int);
//};
//
//void List::Insert(int num, int index) {
////    Node* prevNode = nullptr;
//    Node* currNode = head;
//    Node* newNode = new Node(num);
//    if (head == nullptr) { // Empty List
//        head = newNode;
//        tail = newNode;
//    }
//    else if (index == 0) {
//        newNode->next = currNode;
//        head = newNode;
//    }
//    else {
//        for (int i = 1; i < index && currNode->next != nullptr; i++) {
////            prevNode = currNode;
//            currNode = currNode->next;
////             if (currNode == nullptr) {
////                 cout << "Out of bounds" << endl;
////             }
//        } // 3 4 5 6
//        newNode->next = currNode->next;
//        currNode->next = newNode;
//
//        if (currNode == tail) {
//            tail = newNode;
//        }
//    }
//}
//void List::Remove(int index) {
//    Node* prevNode = nullptr;
//    Node* currNode = head;
//    if (head == nullptr) { // Empty List
//        return;
//    }
//    else if (index == 0) {
//        head = head->next;
//        delete currNode;
//    }
//    else {
//        prevNode = head;
//        for (int i = 0; i < index && currNode->next != nullptr; i++) {
//            prevNode = currNode;
//            currNode = currNode->next;
////             if (currNode == nullptr) {
////                 cout << "Out of bounds" << endl;
////             }
//        } // 3 4 5 6
//        prevNode->next = currNode->next;
//
//        if (currNode == tail) {
//            tail = prevNode;
//        }
//        delete currNode;
//    }
//}

//void foo() {
//    IntList list;
//
//}

int main() {
    IntList list;   // head, tail = nullptr
    list.push_back(3);
    list.push_back(3);
    list.push_back(3);
    list.push_back(3);
    list.push_back(3);
    list.push_back(3);
    list.PrintList();











//    List Intlist;
//    cout << "Inserting 3 & 5 at 0" << endl;
//    Intlist.Insert(3);
//    Intlist.Insert(5);
//    Intlist.PrintList();
//
//    cout << "Inserting 4 at 1" << endl;
//    Intlist.Insert(4, 1);
//    Intlist.PrintList();
//
//    cout << "Inserting 2 at 4" << endl;
//    Intlist.Insert(2, 4);
//    Intlist.PrintList();
//
//    cout << "Removing index 0" << endl;
//    Intlist.Remove(0);
//    Intlist.PrintList();
//
//    cout << "Removing index 1" << endl;
//    Intlist.Remove(1);
//    Intlist.PrintList();
//
//    cout << "Removing index 1" << endl;
//    Intlist.Remove(1);
//    Intlist.PrintList();
//
//    cout << "Removing index 0" << endl;
//    Intlist.Remove(0);
//    Intlist.PrintList();
//
//    cout << "Removing index 0" << endl;
//    Intlist.Remove(0);
//    Intlist.PrintList();
}