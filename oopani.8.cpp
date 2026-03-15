#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    // 'virtual' allows the derived class version to be called at runtime
    virtual void sound() {
        cout << "The animal makes a generic sound." << endl;
    }
};

// Derived Class
class Dog : public Animal {
public:
    // Overriding the base class method
    void sound() override {
        cout << "The dog barks: Woof! Woof!" << endl;
    }
};

int main() {
    // Creating pointers of Base class type
    Animal* myAnimal = new Animal();
    Animal* myDog = new Dog();

    cout << "--- Function Overriding Demo ---" << endl;

    // Calls the base class version
    myAnimal->sound();

    // Calls the overridden version in Dog class
    myDog->sound();

    // Cleanup
    delete myAnimal;
    delete myDog;

    return 0;
}
