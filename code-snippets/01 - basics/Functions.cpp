#include <iostream>

// Function declaration
void greet(std::string name);

int main() {
    greet("Alex");
    greet("Jamie");

    return 0;
}

// Function definition
void greet(std::string name) {
    std::cout << "Hello, " << name << "!\n";
}

/*
    FUNCTIONS

    A function is a reusable block of code that performs
    a specific task.

    Instead of writing the same code repeatedly,
    we can put it inside a function and call it whenever
    we need it.

    Function parts:

    void greet(std::string name);
    ↑    ↑     ↑
    |    |     └── parameter
    |    └──────── function name
    └───────────── return type

    The function declaration tells C++ that the function exists.
    The function definition contains the code that it performs.

    In this example, greet() is called twice with different
    values for the name parameter.

    Functions become especially useful as programs get larger
    because they help organize code into smaller, manageable parts.
*/