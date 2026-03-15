#include <iostream>
using namespace std;

class Calculator {
public:
    // Method 1: Adds two integers
    int add(int a, int b) {
        return a + b;
    }

    // Method 2: Overloaded to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Method 3: Overloaded to add two double values
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    // The compiler automatically decides which version to call based on arguments
    cout << "Sum of 2 integers (10, 20): " << calc.add(10, 20) << endl;
    cout << "Sum of 3 integers (10, 20, 30): " << calc.add(10, 20, 30) << endl;
    cout << "Sum of 2 doubles (5.5, 4.5): " << calc.add(5.5, 4.5) << endl;

    return 0;
}
