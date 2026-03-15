#include <iostream>
#include <string>
using namespace std;

// Grandparent Class
class Person {
public:
    string name;
    Person() { cout << "Person Constructor Called" << endl; }
};

// Parent Class 1 - Virtual Inheritance
class Student : virtual public Person {
public:
    Student() { cout << "Student Constructor Called" << endl; }
};

// Parent Class 2 - Virtual Inheritance
class Teacher : virtual public Person {
public:
    Teacher() { cout << "Teacher Constructor Called" << endl; }
};

// Derived Class (The Diamond Tip)
class TA : public Student, public Teacher {
public:
    TA() { cout << "TA Constructor Called" << endl; }
};

int main() {
    TA obj;

    // Without 'virtual', the next line would cause a compile error:
    // "member 'name' is ambiguous"
    obj.name = "Alex"; 

    cout << "\nTA Name: " << obj.name << endl;
    cout << "Success: Only one instance of Person was created!" << endl;

    return 0;
}
