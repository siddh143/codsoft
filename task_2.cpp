#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2, result;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter First numbers: ";
    cin >> num1;
    cout<< "Enter Second number: ";
    cin >> num2;
    

    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error! Division by zero!";
                return 1;
            }
            break;
        default:
            cout << "Error! Invalid operator";
            return 1;
    }

    cout << "Result: " << result;
    return 0;
}

