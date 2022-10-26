#include <iostream>
using namespace std;

int main() {
	float width, length;
	cout << "Enter the width and length: ";
	cin >> width>> length;
	
	float perimeter = (width + length) * 2;
	float area = width * length;
	
	cout << "The perimeter is :"<<perimeter<<endl;
	cout << "The area is :"<<area;
	return 0;
} 
