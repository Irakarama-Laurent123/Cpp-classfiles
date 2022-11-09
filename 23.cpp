// CPP program to count white spaces in a string
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
	char character;
	cout <<"Please input some character: ";
	
	cin >> character;
	
	if(isdigit(character)){
		cout << "The character is a digit";
	} else if (isalpha(character)){
		cout << "The character is an alpha";
	} else {
		cout << "The character is a symbol";
	}
}
