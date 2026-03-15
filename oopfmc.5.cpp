#include <iostream>
using namespace std;
//base class1
class father {
	public: 
	void showfather() {
		cout << "this is the father class method." <<endl;
	}
};
//base class2
class mother {
	public:
		void showmother() {
			cout << "this is the mother class method." <<endl;
		}
};
//derived class inheriting from both father and mother
class child: public father, public mother {
	public: 
	void showchild(){
		cout << "this is the child class method." <<endl;
	}
};
int main(){
	//creating an object of the derived class 
	child obj;
	cout << "-----multiple inheritance demo----" <<endl;
	//calling method from all class using the child object
	obj.showfather(); //inherited from father
	obj.showmother(); //inherited from mother
	obj.showchild();  //own method
	}
