#include <iostream>
using namespace std;

class ATM {
private:
    int pin; // Private property: Hidden for security

public:
    // Setter method: Enforces the 4-digit validation rule
    void setPin(int p) {
        if (p >= 1000 && p <= 9999) {
            pin = p;
            cout << "PIN set successfully." << endl;
        } else {
            cout << "Error: PIN must be exactly 4 digits!" << endl;
            pin = 0; // Assigning default value on failure
        }
    }

    // Getter method: Provides safe access to the private data
    int getPin() {
        return pin;
    }
};

int main() {
    ATM myCard;
    int inputPin;

    cout << "Enter a 4-digit PIN to set: ";
    cin >> inputPin;

    // Using setter to assign value with validation
    myCard.setPin(inputPin);

    // Using getter to retrieve and display value
    if (myCard.getPin() != 0) {
        cout << "Your stored PIN is: " << myCard.getPin() << endl;
    }

    return 0;
}
