#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Hello, " << name << "!\n";
    std::cout << "You are " << age << " years old.";

    return 0;
}

/*
    INPUT AND OUTPUT

    Output is information that the program displays.
    std::cout is commonly used for output.

    Input is information that the user gives to the program.
    std::cin is commonly used to receive input.

    The >> operator is used to take data from std::cin
    and store it in a variable,

    Try changing the variables and messages to see
    how the program behaves.
*/