#include <iostream>
using namespace std;
class student {
	private:
		int age; // private data member
		public:
			void setage(int a ) { // public function to set value
			age=a;
			void showage() {   //public function to display value
			cout<<" age : " << age<< endl;
			}
};
int main (){
	student s;
	//s.age = 20; // not allowed (private member)
	s.setage(20); // allowed through public method
	s.showage();
	return 0;
} 
};
