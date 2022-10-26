#include <iostream>
using namespace std;

int sum(int a, int b){
	return  a + b;
}

int main(){
	float a=12;
	float b= 23;
	float result = sum(a, b);
	cout << "The sum of "<<a << " and " << b << " is: "<< result;
	return 0;
}
