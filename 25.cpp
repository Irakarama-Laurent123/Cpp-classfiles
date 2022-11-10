#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
	string reverse;
	string str= "Laurent Irakarama";
	int length = str.length();

	
	for (int i = length ; i >= 0; i-- ){
		cout << str[i]<< endl;
		reverse += str[i];
	}
	
	cout << reverse;
	
	return 0;
}
