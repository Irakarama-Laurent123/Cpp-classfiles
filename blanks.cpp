#include <iostream>
#include <cctype>
#include <string.h>

using namespace std;

int main () {
	char string = [];
	int blank;
	
	cout << "Enter you string (with spaces): ";
	cin >> string;
	int length = size(string);
	
	for (int i = 0; i <length ; i++ ){
		if (isblank(i)){
			++blank;
		}
	}
	
	cout << "THE NUMBER OF BLANK SPACES ARE: " << blank;
	
	return 0;
	
	
}
