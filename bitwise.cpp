#include <iostream>
using namespace std;

int main (){
	int a  = 12, b = 25;
	
	cout << "A & B is " << (a&b) << endl;
	cout << "A | B is " << (a|b) << endl;
	cout << "A ^ B is " << (a^b) << endl;
	cout << "~(B) is " << (~b) << endl;
	cout << "a << 1 is " << (a << 1)<< endl;
	cout << "a << 2 is " << (a << 2)<< endl;
	cout << "a << 3 is " << (a << 3)<< endl;
	cout << "a >> 1 is " << (b >> 1)<< endl;
	cout << "a >> 2 is " << (b >> 2)<< endl;
	cout << "a >> 3 is " << (b >> 3)<< endl;
}
