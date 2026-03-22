/*Circular Linked List Creation and Traversal - 
Implement using linked list with dynamic memory allocation.*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

void createCircularLinkedList(Node*& head, int n) {
    if (n <= 0) return;
    
    head = new Node(1);
    Node* current = head;
    
    for (int i = 2; i <= n; i++) {
        current->next = new Node(i);
        current = current->next;
    }
    
    current->next = head; // Make it circular
}

void traverseCircularLinkedList(Node* head, int n) {
    if (!head) return;
    
    Node* current = head;
    for (int i = 0; i < n; i++) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int n = 5; // Number of nodes in the circular linked list
    
    createCircularLinkedList(head, n);
    
    cout << "Circular Linked List: ";
    traverseCircularLinkedList(head, n);
    
    // Clean up memory (not shown here for simplicity)
    
    return 0;
}
