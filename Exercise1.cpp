#include <iostream>
using namespace std;
int main(){
	int marks;
	int total = 20;
	
	cout<< "Enter your marks: ";
	cin >> marks;
	
	string result= (marks > 10) ? "Passed" : "Failed"; 
	cout << "You " << result << " the exam!";
	return 0;
	
}
