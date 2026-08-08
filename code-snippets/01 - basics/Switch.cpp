#include <iostream>

int main() {
    int choice;

    std::cout << "Choose a number (1-3): ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "You chose one.";
            break;

        case 2:
            std::cout << "You chose two.";
            break;

        case 3:
            std::cout << "You chose three.";
            break;

        default:
            std::cout << "Invalid choice.";
    }

    return 0;
}

/*
    SWITCH

    "switch" is another way to make decisions.

    It checks one value against several specific cases.

    Each case represents a possible value.
    break stops the switch after a matching case is executed.
    default runs when none of the cases match.

    SWITCH VS IF-ELSE

    if-else:
    - Useful for conditions and comparisons.
    - Example: age >= 18

    switch:
    - Useful when checking one value against specific options.
    - Example: a menu with choices 1, 2, or 3
*/