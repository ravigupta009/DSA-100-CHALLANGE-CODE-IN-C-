/* Merge Two Sorted Linked Lists - Implement using linked list with dynamic memory allocation.*/
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};
Node* mergeSortedLists(Node* head1, Node* head2) {
    if (!head1) return head2;
    if (!head2) return head1;
    
    Node* mergedHead = nullptr;
    if (head1->data < head2->data) {
        mergedHead = head1;
        mergedHead->next = mergeSortedLists(head1->next, head2);
    } else {
        mergedHead = head2;
        mergedHead->next = mergeSortedLists(head1, head2->next);
    }
    return mergedHead;
}
void printList(Node* head) {
    Node* current = head;
    while (current) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
int main() {
    Node* head1 = new Node(1);
    head1->next = new Node(3);
    head1->next->next = new Node(5);
    
    Node* head2 = new Node(2);
    head2->next = new Node(4);
    head2->next->next = new Node(6);
    
    cout << "List 1: ";
    printList(head1);
    cout << "List 2: ";
    printList(head2);
    
    Node* mergedHead = mergeSortedLists(head1, head2);
    cout << "Merged List: ";
    printList(mergedHead);
    
   
    while (mergedHead) {
        Node* temp = mergedHead;
        mergedHead = mergedHead->next;
        delete temp;
    }
    
    return 0;
}
