#include <ctime>
#include <iostream>
using namespace std;

int main() {
	time_t now = time(0); // get current dat/time with respect to system.
   char* dt = ctime(&now); // convert it into string.
   cout << "The local date and time is: " << dt << endl; // print local date and time.
	
	return 0;
}
