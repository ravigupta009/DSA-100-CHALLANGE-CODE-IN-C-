/* Evaluate Postfix Expression - Implement using linked list with dynamic memory allocation.
*/
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int evaluatePostfix(const string& postfix) {
    stack<int> s;
    for (char ch : postfix) {
        if (isalnum(ch)) {
            s.push(ch - '0'); // Convert char to int and push to stack
        } else { // Operator
            int val2 = s.top(); s.pop();
            int val1 = s.top(); s.pop();
            switch (ch) {
                case '+': s.push(val1 + val2); break;
                case '-': s.push(val1 - val2); break;
                case '*': s.push(val1 * val2); break;
                case '/': s.push(val1 / val2); break;
            }
        }
    }
    return s.top(); // Result is on top of the stack
} 
int main() {
    string infix = "3+(4*5)-6";
    string postfix = infixToPostfix(infix);
    cout << "Postfix Expression: " << postfix << endl;
    int result = evaluatePostfix(postfix);
    cout << "Evaluated Result: " << result << endl;
    return 0;
}

