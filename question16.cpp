#include <iostream>
#include <string>
using namespace std;

int main() {
	string fname, lname;
	cout <<"Enter firstname: ";
	cin >> fname;
	cout << "Enter lastname: ";
	cin >> lname;
	
	cout << "Name in reverse: " << lname <<" " << fname;
	return 0;
}
