#include <iostream>
using namespace std;
class Atm {
	private: 
	int pin; //private properly : hidden from outside access
	public:
		//setter method with validation(4-digits check)
		void setpin (int p) {
			if (p >= 1000 && p<=9999){
				pin = p;
				cout<< "pin set successfully." <<endl;
			} else {
				cout <<"error: pin must be exactly 4 digits!" <<endl;
			}
		}
		//getter method to safely retrieve then pin
		int getpin () {
			return pin;
		}
};
int main () {
	Atm mycard;
	//setting pin via setter
	mycard.setpin (4321);
	//displaying pin via getter
	cout<< "stored pin:" <<mycard.getpin() <<endl;
	return 0;
}
