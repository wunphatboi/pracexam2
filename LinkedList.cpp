#include <iostream>
#include "LinkedList.h"
LinkedList::LinkedList() {
head = nullptr;
}
LinkedList::~LinkedList() {
while (head != nullptr) {
deleteFront();
}
}
void LinkedList::insertFront(int item) {
Node* newNode = new Node(item, head);
head = newNode;
}
void LinkedList::deleteFront() {
if(head != nullptr) {
Node* oldHead = head;
head = head->link;
delete oldHead;
}
}
void LinkedList::printList() {
Node* currNode = head;
while(currNode != nullptr) {
std::cout << currNode->data << " ";
currNode = currNode->link;
}
}
bool LinkedList::swap(int pos1, int pos2) {
}
bool LinkedList::find_and_delete(int target) {
    Node* curr = head;
    int pos = 1;
    while (curr != nullptr) {
    if (curr->data == target) {
    delete head;
    return true;
    }
    curr = curr->link;
    pos++;
}
return false;
}



