/* Count Occurrences of an Element in Linked List - Implement using linked list with dynamic memory allocation.
*/
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};
int countOccurrences(Node* head, int key) {
    int count = 0;
    Node* current = head;
    while (current) {
        if (current->data == key) {
            count++;
        }
        current = current->next;
    }
    return count;
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
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    
    cout << "Linked List: ";
    printList(head);
    
    int key = 2;
    int occurrences = countOccurrences(head, key);
    
    cout << "Number of occurrences of " << key << ": " << occurrences << endl;
    
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    
    return 0;
}
