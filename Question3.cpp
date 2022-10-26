#include <iostream>
using namespace std;

int sum(int a, int b){
	return a + b;
}

int main () {
	int a, b;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	int result = sum(a, b);
	cout << "The sum of "<<a << " and " << b << " is: "<< result;
	return 0;
	
}
