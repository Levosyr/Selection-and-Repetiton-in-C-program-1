#include <iostream>

using namespace std;

int main() {
    int num1,num2  ;
    char op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    switch (op) {
    case '+':
        cout << num1 << " " << op << " " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " " << op << " " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " " << op << " " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << num1 << " " << op << " " << num2 << " = " << num1 / num2 << endl;
        }
        else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        break;
    default:
        cout << "Error: Unsupported operator." << endl;
    }

    return 0;
}
