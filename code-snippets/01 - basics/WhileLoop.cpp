#include <iostream>

int main() {
    int i = 1;

    while (i <= 5) {
        std::cout << i << '\n';
        i++;
    }

    return 0;
}

/*
    WHILE LOOP

    A while loop repeats a block of code as long as
    its condition remains true.

    The condition is checked before each repetition.

    In this example:

    i <= 5   → condition
    i++      → updates i after each repetition

    The loop prints:

    1
    2
    3
    4
    5

    FOR VS WHILE

    for:
    - Commonly used when you know how many times
      something should repeat.
    - The starting value, condition, and update
      are written together.

    while:
    - Useful when the number of repetitions may
      depend on a condition.
    - The starting value and update are usually
      handled separately.
*/