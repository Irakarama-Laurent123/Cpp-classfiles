#include <iostream>
using namespace std;

int main() {
	int num, product;
	for(num = 1; num <= 20; num ++ ){
		if(num % 2 != 0){
			product*=num;
	}
	}
	cout << "The product is: " << product;
}
