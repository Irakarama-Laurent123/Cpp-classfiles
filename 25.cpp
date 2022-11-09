#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
	char arr[17];
	string str= "Laurent Irakarama";
	int length = str.length();

	
	for (int i = length ; i >= 0; i-- ){
		cout << str[i]<< endl;
		char arr[i] = str[i];
	}
	
	cout << arr;
	
	return 0;
}
