#include <iostream>

int main() {
    int a = 10;
    int b = 3;

    std::cout << "Addition: " << a + b << '\n';
    std::cout << "Subtraction: " << a - b << '\n';
    std::cout << "Multiplication: " << a * b << '\n';
    std::cout << "Division: " << a / b << '\n';
    std::cout << "Remainder: " << a % b << '\n';

    return 0;
}

/*
    ARITHMETIC OPERATORS

    C++ can perform basic mathematical operations using operators.

    +  → addition
    -  → subtraction
    *  → multiplication
    /  → division
    %  → remainder

    Notice that a and b are int variables.
    This means division between them produces an integer result.
    To get a decimal value, you must use the "double"  data type.

    Try changing the values of a and b and observe the results.
*/