#include <iostream>
#include <ctime>
using namespace std;

int main(){
	
	int yearSeconds = 60  * 60 * 24 * 365;
	int seconds = 1000000000;
	
	int years = seconds/ yearSeconds;
	cout << "John is "<<years << " years old";
	
	return 0;
}
