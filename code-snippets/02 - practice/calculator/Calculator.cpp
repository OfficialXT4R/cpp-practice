#include <iostream>
#include <cmath>

double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);

int main() {

    double num1;
    double num2;
    char operation;
    char again;

    do {
        std::cout << "================================" << '\n';
        std::cout << "          CALCULATOR            " << '\n';
        std::cout << "================================" << '\n';

        std::cout << "Enter your first number.\n";
        std::cin >> num1;

        std::cout << "Choose an operation.\n";
        std::cout << "[+] Addition\n";
        std::cout << "[-] Subtraction\n";
        std::cout << "[*] Multiplication\n";
        std::cout << "[/] Division\n";
        std::cin >> operation;

        std::cout << "Enter your second number.\n";
        std::cin >> num2;

        std::cout << "================================" << '\n';
        switch (operation)
        {
        case '+':
            std::cout << "Result: " << add(num1, num2) << '\n';
            break;
        case '-':
            std::cout << "Result: " << subtract(num1, num2) << '\n';
            break;
        case '*':
            std::cout << "Result: " << multiply(num1, num2) << '\n';
            break;
        case '/':
            if (num2 == 0) {
                std::cout << "Cannot divide by zero." << '\n';
            }
            else {
                std::cout << "Result: " << divide(num1, num2) << '\n';
            }
            break;

        default:
            std::cout << "Invalid." << '\n';
            break;
        }

        std::cout << "================================" << '\n';

        do {
            std::cout << "Calculate again? (y/n): ";
            std::cin >> again;
        } while(again != 'y' && again != 'n');

    } while(again == 'y');

    return 0;
}

double add(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    return num1 / num2;
}