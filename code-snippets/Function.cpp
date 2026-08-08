#include <iostream> // gives us input/output tools like std::cout
#include <string>   // gives us the std::string data type

/*
    Function prototype:
    - Tells c++ that a function named happyBirthday() 
    exists, so we can call it before its actual definition
*/

void happyBirthday(std::string name, int age);

int main() {

    // variables that we'll pass into our function
    std::string name = "CJ";
    int age = 18;

    // calls the function and passes name and age into it
    happyBirthday(name, age);

    // tells the program that main() finished successfully
    // THIS IS CRUCIAL!!
    return 0;
}

/*
    Function definition:
    - This is where we actually write what happyBirthday() does

    - Name and age are "parameters" — they receive the values
    that we pass when calling the function
*/
void happyBirthday(std::string name, int age) {

    // std::cout prints text to the console
    // \n moves the cursor to the next line
    std::cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday to you!\n";

    // << lets us insert variables or strings into our output
    // if name = "CJ", this prints "Happy birthday, dear CJ..."
    std::cout << "Happy birthday, dear " << name << "..." << '\n';

    // \n\n creates an extra blank line
    std::cout << "Happy birthday to you!\n\n";

    // inserts the value of age into the sentence
    // if age = 18, this prints "You are 18 years old!"
    std::cout << "You are " << age << " years old!";
}
