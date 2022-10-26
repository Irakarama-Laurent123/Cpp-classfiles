#include <iostream>
#include <iomanip>
using namespace std;

#define PI 3.14159265


int main (){
	float radius;
	cout << "Enter the radius: ";
	cin >> radius;
	
	float area = (PI * (radius * radius));
	float circumuference = 2 * PI * radius;
	cout << "The area is "<<area <<endl;
	cout<< "The circumuference is "<<circumuference<<endl;
	cout<<setw(5)<<"RCA"<<endl;
	cout<<dec<<18<<endl;
	cout<<oct<<18<<endl;
	cout<<hex<<18<<endl;
	
	
	return 0;
}
