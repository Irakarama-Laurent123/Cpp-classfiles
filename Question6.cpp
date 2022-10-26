#include <iostream>
using namespace std;

int main() {
	int num, sum=0;
	for(num = 0; num <= 100; num ++ ){
		if(num % 2 == 0){
			sum+=num;
	}
	}
	cout << "The sum is: " << sum;
}
