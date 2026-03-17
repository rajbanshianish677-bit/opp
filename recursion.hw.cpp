#include <iostream>
//recursive function to find the nth fibonacci number
int fibonacci(int n) {
	if (n <=1){
		return n; //base cases: f(0) = 0, f(1) = 1
	}
return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
}
int main(){
	int terms = 9; //number of terms to display
	std :: cout<<"fibonacci series:";
	for (int i = 0; i<terms; i++) {
		std :: cout << fibonacci (i) << " ";
	}
	return 0;
}
