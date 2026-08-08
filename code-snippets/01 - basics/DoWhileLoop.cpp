#include <iostream>

int main() {
    int number;

    do {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    } while (number <= 0);

    std::cout << "You entered: " << number;

    return 0;
}

/*
    DO-WHILE LOOP

    A do-while loop is similar to a while loop,
    but the condition is checked after the code runs.

    This means the code inside the do block
    will always execute at least once.

    while:
    - Checks the condition first.
    - May execute zero times.

    do-while:
    - Executes the code first.
    - Checks the condition afterward.
    - Always executes at least once.


    This can be useful when you want the user to
    perform an action at least once, such as entering
    a value or choosing from a menu.
*/