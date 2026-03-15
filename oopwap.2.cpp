#include <iostream>
using namespace std;
class Atm {
	private:
		int pin; //private properly: hidden from outside access
		public: 
		//setter method with validation (4-digits check)
		void setpin (int p) {
			if (p >= 1000 && p< 9999) {
				pin = p;
				cout<< "error : pin must be exactly 4 digits! "<<endl;
			}
		}
		//getter method to safely retrieve the pin
		int getpin(){
			return pin;
		}
};
int main (){
	Atm mycard;
	//setting pin viasetter
	mycard.setpin(1234);
	//displaying pin via getter
	cout<<"stored pin:" <<mycard.getpin() <<endl;
	return 0;
}
