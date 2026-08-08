#include <iostream>
#include <string>

struct Student {
    std::string name;
    int age;
    double grade;
};

int main() {
    Student student;

    student.name = "Alex";
    student.age = 18;
    student.grade = 92.5;

    std::cout << "Name: " << student.name << '\n';
    std::cout << "Age: " << student.age << '\n';
    std::cout << "Grade: " << student.grade << '\n';

    return 0;
}

/*
    STRUCTS

    A struct lets us group related data together
    under one type.

    In this example, Student contains:

    name  → string
    age   → integer
    grade → decimal number

    We can then create a Student variable and access
    its individual pieces of data using the . operator.

    student.name
    student.age
    student.grade

    Without a struct, we might have to manage each
    piece of information as a separate variable.

    Structs become useful when several pieces of data
    belong together.
*/