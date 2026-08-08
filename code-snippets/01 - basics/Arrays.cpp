#include <iostream>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};

    std::cout << numbers[0] << '\n';
    std::cout << numbers[1] << '\n';
    std::cout << numbers[2] << '\n';
    std::cout << numbers[3] << '\n';
    std::cout << numbers[4] << '\n';

    return 0;
}

/*
    ARRAYS

    An array stores multiple values of the same data type
    under one variable name.

    Instead of:

    int number1 = 10;
    int number2 = 20;
    int number3 = 30;

    We can use:

    int numbers[] = {10, 20, 30};

    Each value in an array has an index (position).

    IMPORTANT:
    Array indexes start at 0, not 1.

    numbers[0] → first value
    numbers[1] → second value
    numbers[2] → third value

    This makes arrays useful when working with collections
    of related values.
*/