#include <iostream>
using namespace std;

int swap(int a, int b){
	int swap1 = a;
	a = b;
	b = swap1;
	
	cout << "After swapping the 1st number is: " << a<< endl;
	cout << "After swapping the 2nd number is: " << b << endl;
}

int main(){
	int a ,b ;
	cout << "Input 1st number: ";
	cin >> a;
	cout << "Input 2nd number: ";
	cin >> b;
	swap(a, b);
	return 0;
	
}
