#include <iostream>
using namespace std;

int main() {
	cout << "1. Add" << endl;
	cout << "2. Subtract" << endl;
	cout << "3. Multpliy" << endl;
	cout << "4. Divide" << endl;
	cout << "5. Modulus" << endl;
	
	int choice;
	char cont;
	int firstNum, secondNum, result;
	
	start:
	cout << "Enter your choice: ";
	cin >> choice;
	if(choice<=5 && choice>0){
	cout << "Enter your two numbers: ";
	cin>>firstNum>>secondNum;
	if(choice == 1){
		result= firstNum + secondNum;
	} else if (choice == 2){
		result= firstNum - secondNum;
	}else if(choice == 3){
		result= firstNum * secondNum;
	} else if (choice == 4) {
		result= firstNum / secondNum;
	} else{
		result= firstNum % secondNum;
	}
	}
	else{
		cout << "Please enter a number from 1 to 5"<< endl;
		goto start;
	}
	
	cout << "Result: " << result << endl;
	cout << "Continue? ";
	cin>> cont;
	if (cont == 'y'){
		goto start;
	}else {
		cout << "Thank you for using this simple calculator";
	}
	return 0;
	
}
