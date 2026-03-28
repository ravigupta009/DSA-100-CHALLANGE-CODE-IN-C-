/*Polynomial Using Linked List - Implement using linked list with dynamic memory allocation.
*/

#include <iostream>
using namespace std;

struct Node {
    int coef;
    int exp;
    Node* next;
};

// Insert term in polynomial (sorted by exponent)
Node* insert(Node* head, int c, int e) {
    Node* temp = new Node;
    temp->coef = c;
    temp->exp = e;
    temp->next = NULL;

    // If list is empty OR highest exponent
    if (head == NULL || head->exp < e) {
        temp->next = head;
        return temp;
    }

    Node* curr = head;
    while (curr->next != NULL && curr->next->exp > e) {
        curr = curr->next;
    }

    // If same exponent → add coefficients
    if (curr->next != NULL && curr->next->exp == e) {
        curr->next->coef += c;
        delete temp;
    } else {
        temp->next = curr->next;
        curr->next = temp;
    }

    return head;
}

// Display polynomial
void display(Node* head) {
    while (head != NULL) {
        cout << head->coef << "x^" << head->exp;
        if (head->next != NULL)
            cout << " + ";
        head = head->next;
    }
    cout << endl;
}

// Add two polynomials
Node* addPoly(Node* p1, Node* p2) {
    Node* result = NULL;

    while (p1 != NULL && p2 != NULL) {
        if (p1->exp > p2->exp) {
            result = insert(result, p1->coef, p1->exp);
            p1 = p1->next;
        } 
        else if (p1->exp < p2->exp) {
            result = insert(result, p2->coef, p2->exp);
            p2 = p2->next;
        } 
        else {
            result = insert(result, p1->coef + p2->coef, p1->exp);
            p1 = p1->next;
            p2 = p2->next;
        }
    }

    // Remaining terms
    while (p1 != NULL) {
        result = insert(result, p1->coef, p1->exp);
        p1 = p1->next;
    }

    while (p2 != NULL) {
        result = insert(result, p2->coef, p2->exp);
        p2 = p2->next;
    }

    return result;
}

// Main
int main() {
    Node* poly1 = NULL;
    Node* poly2 = NULL;

    // First polynomial: 5x^2 + 4x^1 + 2
    poly1 = insert(poly1, 5, 2);
    poly1 = insert(poly1, 4, 1);
    poly1 = insert(poly1, 2, 0);

    // Second polynomial: 3x^2 + 2x^1 + 1
    poly2 = insert(poly2, 3, 2);
    poly2 = insert(poly2, 2, 1);
    poly2 = insert(poly2, 1, 0);

    cout << "Polynomial 1: ";
    display(poly1);

    cout << "Polynomial 2: ";
    display(poly2);

    Node* result = addPoly(poly1, poly2);

    cout << "Resultant Polynomial: ";
    display(result);

    return 0;
}