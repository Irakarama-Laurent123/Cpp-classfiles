#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int product=1, counter = 0;
	for(int num = 1; num <= 100; num++){
		counter = 0;
		for(int i =1; i <= 100; i++){
		   if(num % i == 0){ 
		   	counter++;
		   }	
		}
		if(counter<= 2){
			product =product * num;
		}
	}
	cout << "The product of the prime number is: " << product;
}
