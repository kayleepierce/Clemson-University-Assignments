#include <string>
#include <stack>

using namespace std;

//Calculates a postfix expression with integer operands using a stack
//The expression is represented using an array of strings
//Each string is either an operand or operator symbol
//Operator symbols:
//"+" addition
//"-" subtraction
//"*" multiplication
//"/" divison
//"%" remainder
//Example expression: "8", "5", "-" evaluates to a result of 3:
//1: push 8, 2: push 5,
//3: "-"-> pop top two values, earlier value is the left-side operand: 8 - 5
//The result of the operation (8-5) is 3, push 3 onto stack
//After evaluation of the expression, the final result should be
//the only value on the stack, return 0 if the stack is
//non-empty after popping the result
//Return 0 if expression is zero-length or if there are insufficient operands
//for an operation
//The STL Stack class can be used
//To easily convert a numeric string to an int you may use the stoi() function
//which takes a string as a parameter and returns a string
int calculatePostfixExpression(string expression[], int length) {
    stack<int> theStack; // Stack creation

    if (length == 0) {
        return 0; // Return is length is 0
    }

    for (int i = 0; i < length; i++) { // Loop through all expressions
        if (expression[i] != "+" && expression[i] != "-" && expression[i] != "*" && expression[i] != "/" && expression[i] != "%") {
            theStack.push(stoi(expression[i]));
        } else {
            if (theStack.empty()) {
                return 0;
            } else {
                int k, p; // Pop first TWO elements from stack
                if (!theStack.empty()) {
                    k = theStack.top();
                    theStack.pop();
                } else {
                    return 0;
                }
                if (!theStack.empty()) {
                    p = theStack.top();
                    theStack.pop();
                } else {
                    return 0;
                }

                if (expression[i] == "+") {
                    theStack.push(p + k);
                } else if (expression[i] == "-") {
                    theStack.push(p - k);
                } else if (expression[i] == "*") {
                    theStack.push(p * k);
                } else if (expression[i] == "/") {
                    if (k == 0) {
                        return 0; // No division by 0
                    }
                    theStack.push(p / k);
                } else if (expression[i] == "%") {
                    if (k == 0) {
                        return 0; // No % by 0
                    }
                    theStack.push(p % k);
                }
            }
        }
    }

    if (theStack.size() != 1) {
        return 0;
    }

    return theStack.top();
}
