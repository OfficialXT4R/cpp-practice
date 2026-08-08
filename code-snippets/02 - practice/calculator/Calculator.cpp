#include <iostream>

int main() {
    double num1;
    double num2;
    char operation;

    std::cout << "Enter operation: " << '\n';
    std::cin >> operation;

    std::cout << "Enter your first number: " << '\n';
    std::cin >> num1;

    std::cout << "Enter your second number: " << '\n';
    std::cin >> num2;

    switch (operation)
    {
    case '+':
        std::cout << "Result: " << num1 + num2;
        break;
    case '-':
        std::cout << "Result: " << num1 - num2;
        break;
    case '*':
        std::cout << "Result: " << num1 * num2;
        break;
    case '/':
        std::cout << "Result: " << num1 / num2;
        break;
    default:
        std::cout << "Invalid operator.";
        break;
    }
    
    return 0;
}