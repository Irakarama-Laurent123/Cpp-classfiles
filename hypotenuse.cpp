#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float hypo;
	float w = 4, h= 6;
	
	hypo = sqrt((pow(w , 2) + pow(h, 2)));
	cout << "The hypotenuse is: " << hypo;
	
	return 0;
}
