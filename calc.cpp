#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    // 1. Get the two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // 2. Get the operator
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    // 3. Calculate and display result
    if (op == '+') cout << "Result: " << num1 + num2;
    else if (op == '-') cout << "Result: " << num1 - num2;
    else if (op == '*') cout << "Result: " << num1 * num2;
    else if (op == '/') cout << "Result: " << num1 / num2;
    else cout << "Invalid operator!";

    return 0;
}
