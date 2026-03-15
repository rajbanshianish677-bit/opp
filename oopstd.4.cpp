#include <iostream>
#include <string>
using namespace std;

// Base Class (Parent)
class Person {
public:
    string name;
    int age;

    void displayPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived Class (Child) inheriting from Person
class Student : public Person {
public:
    int rollNo;

    void displayStudent() {
        // Accessing properties inherited from Person
        displayPerson(); 
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    // Creating an object of the derived class
    Student s1;

    // Setting values for both inherited and own properties
    s1.name = "John Doe"; // From Person
    s1.age = 20;          // From Person
    s1.rollNo = 501;      // From Student

    // Calling method from the derived class
    cout << "--- Student Details ---" << endl;
    s1.displayStudent();

    return 0;
}

