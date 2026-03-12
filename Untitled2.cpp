#include <iostream>
using namespace std;

class Student {
private:
    int age;   // Private data member

public:
    void setAge(int a) {   // Public function to set value
        age = a;
    }

    void showAge() {       // Public function to display value
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s;
    
    // s.age = 20;  // ? Not allowed (private member)

    s.setAge(20);   // ? Allowed through public method
    s.showAge();

    return 0;
}
