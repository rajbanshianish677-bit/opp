#include <iostream>
#include <string>
using namespace std;
class student{
	public:
		//properties (data member)
		string name;
		int rollNo;
		int marks;
		//method (member function)
		void calculateResult(){
		cout << "Student: " << name << " | Roll No: " << rollNo << endl;
			if (marks >= 40){
				cout<<"result: pass"<<endl;
			}else{
			cout<<"result: fail" <<endl;
			}
			cout<<"------------------------------"<<endl;
		}
};
int main(){
	//creating first object
	student s1;
	s1.name = "Anish";
	s1.rollNo = 101;
	s1.marks = 85;
	//creating second object
	student s2;
	s2.name = "Aastha";
	s2.rollNo = 102;
	s2.marks = 35;
	//calling methods using objects
	s1.calculateResult();
	s2.calculateResult();
	return 0;
}
