#include <iostream>

int main() {
    int number = 10;
    int& reference = number;

    std::cout << "number: " << number << '\n';
    std::cout << "reference: " << reference << '\n';

    reference = 20;

    std::cout << "number: " << number << '\n';
    std::cout << "reference: " << reference << '\n';

    return 0;
}

/*
    REFERENCES

    A reference is another name for an existing variable.

    In this example:

    int number = 10;
    int& reference = number;

    reference refers to the same value as number.
    It does not create a separate copy of number.

    Because they refer to the same variable, changing
    reference also changes number.

    After:

    reference = 20;

    both number and reference contain 20.

    The & symbol is used when declaring a reference.

    References are commonly used when passing variables
    to functions without making a copy.
*/