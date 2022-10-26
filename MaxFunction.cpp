#include <iostream>
using namespace std;

double maximum(double x, double y, double z){
	double maxValue =  x;
	if(y > maxValue){
		maxValue = y;
		cout << "Max: " << maxValue;
	}
	if(z > maxValue){
		maxValue = z;
		cout << "Max: " << maxValue;
	}
	
	return maxValue;
}

int main(){
	maximum(3 , 6, 5);
}
