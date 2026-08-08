#include <iostream>

int main() {

    for (int i = 1; i <= 5; i++) {
        std::cout << i << '\n';
    }

    return 0;
}

/*
    FOR LOOP

    A for loop repeats a block of code while its condition is true.

    A for loop has three main parts:

    int i = 1   → starting value
    i <= 5      → condition
    i++         → update

    In this example, the loop prints:

    1
    2
    3
    4
    5

    for loops are commonly used when you know
    how many times something should repeat.

    Try changing the starting value, condition,
    or update and observe what happens.
*/