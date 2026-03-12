#include <iostream>
#include <string>
using namespace std;
class student {
	public:
		//prpoerties (data members)
		string name;
		int rollNo;
		int marks;
		void calculatedresult () {
			cout << "Student: " << name << " | Roll No: " << rollNo << endl;
			if (marks >= 40) {
				cout <<"result: passed"<<endl;
			} else {
				cout <<" result: failed" <<endl;
			}
			cout <<"----------------------------"<<endl;
		}
};
int main() {
	//creating first object
	student s1;
	s1.name = "anish";
	s1.rollNo = 101;
    s1.marks = 85;
    //creating second object
    student s2;
    s2.name = "aastha";
    s2.rollNo = 102;
    s2.marks = 39;
    //creating third object
    student s3;
    s3.name = "ashmita";
    s3.rollNo = 103;
    s3.marks = 35;
    //calling methods using objects
    s1.calculatedresult() ;
    s2.calculatedresult() ;
    s3.calculatedresult() ;
    return 0 ;
    
}
