#include <iostream>
using namespace std;
int main(){
	int marks;
	
	cout<< "Enter your marks: ";
	cin >> marks;
	
	string result= (marks > 16) ? "A" : ((marks > 14) ? "B" : ((marks > 10) ? "C": "D")); 
	cout << "You have grade " << result << " in the exam!";
	return 0;
	
}
