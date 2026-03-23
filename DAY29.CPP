/*Rotate Linked List Right by k Places - Implement using linked list with dynamic memory allocation.*/

#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};
void createLinkedList(Node*& head, int n) {
    if (n <= 0) return;
    
    head = new Node(1);
    Node* current = head;
    
    for (int i = 2; i <= n; i++) {
        current->next = new Node(i);
        current = current->next;
    }
}
Node* rotateRight(Node* head, int k) {
    if (!head || k <= 0) return head;
    
    // Compute the length of the linked list
    Node* current = head;
    int length = 1;
    while (current->next) {
        current = current->next;
        length++;
    }
    
    // Connect the last node to the head to make it circular
    current->next = head;
    
    // Find the new tail and new head after rotation
    k = k % length; // Handle cases where k >= length
    int stepsToNewHead = length - k;
    
    for (int i = 0; i < stepsToNewHead; i++) {
        current = current->next;
    }
    
    Node* newHead = current->next; // New head after rotation
    current->next = nullptr; // Break the circular link
    
    return newHead;
}