#include <iostream>
using namespace std;

class ATM {
private:
    int pin;

public:
    // Setter function
    void setPin(int p) {
        if (p >= 1000 && p <= 9999) {
            pin = p;
            cout << "PIN set successfully." << endl;
        } else {
            cout << "Invalid PIN! PIN must be exactly 4 digits." << endl;
        }
    }

    // Getter function
    int getPin() {
        return pin;
    }
};

int main() {
    ATM obj;
    int userPin;

    cout << "Enter 4-digit PIN: ";
    cin >> userPin;

    obj.setPin(userPin);

    cout << "Your PIN is: " << obj.getPin() << endl;

    return 0;
}
