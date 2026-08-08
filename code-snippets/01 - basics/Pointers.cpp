#include <iostream>

int main() {
    int number = 10;
    int* pointer = &number;

    std::cout << "number: " << number << '\n';
    std::cout << "address: " << pointer << '\n';
    std::cout << "value: " << *pointer << '\n';

    *pointer = 20;

    std::cout << "number: " << number << '\n';

    return 0;
}

/*
    POINTERS

    A pointer is a variable that stores the memory address
    of another variable.

    In this example:

    int number = 10;
    int* pointer = &number;

    &number gets the memory address of number.
    pointer stores that address.

    The * symbol can be used to access the value
    stored at the address.

    *pointer
    → the value that pointer is pointing to

    Because pointer points to number, changing *pointer
    also changes number.

    REFERENCES VS POINTERS

    reference → another name for an existing variable
    pointer   → stores the address of another variable

    Pointers are useful for working directly with memory
    and are an important part of C++.
*/