/*Convert an infix expression to postfix notation using stack.*/
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}
string infixToPostfix(const string& infix) {
    stack<char> s;
    string postfix;
    for (char ch : infix) {
        if (isalnum(ch)) {
            postfix += ch; // Append operands to output
        } else if (ch == '(') {
            s.push(ch); // Push '(' to stack
        } else if (ch == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top(); // Pop until '(' is found
                s.pop();
            }
            s.pop(); // Pop '(' from stack
        } else { // Operator
            while (!s.empty() && precedence(s.top()) >= precedence(ch)) {
                postfix += s.top(); // Pop operators with higher or equal precedence
                s.pop();
            }
            s.push(ch); // Push current operator to stack
        }
    }
    while (!s.empty()) {
        postfix += s.top(); // Pop remaining operators
        s.pop();
    }
    return postfix;
}