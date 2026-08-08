#include <iostream>

int main() {
    int rows;
    int columns;

    std::cout << "How many rows?: ";
    std::cin >> rows;

    std::cout << "How many columns?: ";
    std::cin >> columns;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            std::cout << "* ";
        }

        std::cout << '\n';
    }

    return 0;
}

/*
    NESTED LOOPS

    A nested loop is a loop placed inside another loop.

    The outer loop controls the rows.
    The inner loop controls what happens within each row.

    For every single iteration of the outer loop,
    the inner loop runs from beginning to end.

    For example, with 3 rows and 4 columns:

    * * * *
    * * * *
    * * * *

    Nested loops are useful for working with grids,
    tables, patterns, and other repeated structures.
*/