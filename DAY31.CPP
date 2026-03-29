/* Implement a stack data structure using an array with the following operations: push, pop, and display.
*/
#include <iostream>
using namespace std;
#define MAX 100
class Stack {
    int top;
    int arr[MAX];
public:

    Stack() { top = -1; }
    void push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack overflow" << endl;
            return;
        }
        arr[++top] = x;
    }
    void pop() {
        if (top < 0) {
            cout << "Stack underflow" << endl;
            return;
        }
        top--;
    }
    void display() {
        if (top < 0) {
            cout << "Stack is empty" << endl;
            return;
        }
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};