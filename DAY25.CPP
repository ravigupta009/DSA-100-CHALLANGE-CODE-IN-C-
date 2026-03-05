/* Delete First Occurrence of a Key - Implement using linked list with dynamic memory allocation.
*/
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};
Node* deleteFirstOccurrence(Node* head, int key) {
    if (!head) return nullptr;
    
    if (head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    
    Node* current = head;
    while (current->next && current->next->data != key) {
        current = current->next;
    }
    
    if (current->next) {
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
    
    return head;
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
    head->next->next->next = new Node(4);
    
    cout << "Original List: ";
    printList(head);
    
    int key = 3;
    head = deleteFirstOccurrence(head, key);
    
    cout << "List after deleting first occurrence of " << key << ": ";
    printList(head);
    
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    
    return 0;
}
