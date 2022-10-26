#include <iostream>
using namespace std;

int main() {
	float degree;
	cout << "Enter the temperature: ";
	cin >> degree;
	
	float temperature = (degree * 9/5)  + 32;
	
	cout << "The temperature in fahrenheit: " << temperature;
	return 0;
	
}
