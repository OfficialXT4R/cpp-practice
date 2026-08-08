#include <iostream>
#include <string>

int main() {
    int age = 18;
    double height = 5.8;
    char grade = 'A';
    std::string name = "Alex";
    bool isStudent = true;

    std::cout << name << '\n';
    std::cout << age << '\n';
    std::cout << height << '\n';
    std::cout << grade << '\n';
    std::cout << isStudent << '\n';

    return 0;
}

/*
    VARIABLES

    Variables store data that we can use later in a program.

    Different data types are used for different kinds of values:

    int       → whole numbers
    double    → decimal numbers
    char      → a single character
    string    → text
    bool      → true or false

    A variable can also be changed after it is created.
*/