#include <iostream>
#include <string>

int main() {
    std::string firstName = "Alex";
    std::string lastName = "Smith";

    std::cout << "First name: " << firstName << '\n';
    std::cout << "Last name: " << lastName << '\n';

    std::cout << "Full name: " << firstName + " " + lastName;

    return 0;
}

/*
    STRINGS

    A string is used to store text.

    std::string can contain multiple characters, including
    letters, numbers, spaces, and symbols.

    For example:

    char   → 'A'
    string → "Alex"

    A char stores a single character, while a string
    stores a sequence of characters.

    STRINGS CAN BE COMBINED

    The + operator can join strings together.

    firstName + " " + lastName
    → combines the strings into one string.

    The << operator is used with std::cout to send
    information to the console.

    std::cout << firstName;
    → displays firstName.

    So, remember:

    +  → combines values, such as strings
    << → sends values to std::cout for output
*/