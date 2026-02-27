/*Count Nodes in Linked List*/
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};
int countNodes(Node* head) {
    int count = 0;
    Node* current = head;
    while(current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    
    cout << "Number of nodes in the linked list: " << countNodes(head) << endl;
    
    delete head->next->next;
    delete head->next;
    delete head;
    
    return 0;
}