#include <iostream>
using namespace std;

int main() {

char op;
float num1, num2;

cout << "Enter operator: +, -, *, ,: ";
cin >> op;

cout << "Enter the first operand: ";
cin >> num1;
cout << "Enter the second operand: ";
cin >> num2;



switch (op) {
    
    case '+':
    cout << num1 << " + " << num2 << " = " << num1 + num2;
    break;

    case '-':
    cout << num1 << " - " << num2 << " = " << num1 - num2;

    case '*':
    cout << num1 << " * " << num2 << " = " << num1 * num2;

    case '/':
    cout << num1 << " / " << num2 << " = " << num1 / num2;
    
    default:
    //If the operator is not valid
    cout << "Error! operatir is not correct";
    break;

}
    return 0;

}
