#include <iostream>
#define PI 3.14
using namespace std;

float area (int radius) {
	float area = radius * radius * PI;
	cout << "Area: "<< area << endl;
	return area;
	
}

float circumference(int radius){
	float circumference = 2 * PI * radius;
	cout << "circumference: "<< circumference << endl;
	return circumference;
	
}

int main() {
	int radius;
	cout << "Enter the radius: ";
	cin >> radius;
	area(radius);
	circumference(radius);
}
