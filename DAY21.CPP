/*Create and Traverse Singly Linked List*/

#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};
void traverse(Node* head) {
    Node* current = head;
    while(current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
}
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    
    traverse(head);
    
    
    delete head->next->next;
    delete head->next;
    delete head;
    
    return 0;
}
