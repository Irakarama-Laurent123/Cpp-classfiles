#include <iostream>
#include <cstring>

using namespace std;

int main () {
	string word = "Laurent Is cool as hell";
	int count = 0;

	while(word[count]){
		count++;
	}
	cout << count;
	
	return 0;
}
