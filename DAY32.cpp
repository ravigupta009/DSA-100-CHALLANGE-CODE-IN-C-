/*Implement push and pop operations on a stack and verify stack operations.
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
int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Stack after pushing 10, 20, 30: ";
    s.display();
    s.pop();
    cout << "Stack after popping: ";
    s.display();
    return 0;
}