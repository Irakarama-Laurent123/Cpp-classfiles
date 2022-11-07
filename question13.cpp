#include <iostream>
using namespace std;

int main() {
	int number1, number2;
	
	cout << "Please enter two numbers: ";
	cin>> number1 >> number2;
	
	int quotient = number1 / number2;
	int reminder =  number1 % number2;
	
	cout << "The quotient is: "<< quotient<<endl;
	cout << "The reminder is: "<< reminder;
	
	return 0;
}
