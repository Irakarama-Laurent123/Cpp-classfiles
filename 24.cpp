#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
	string str;
	cout << "Enter a word or sentence: ";
	getline(cin,str);
	int count = 0;
    int length = str.length();
    
    cout << str<<endl;
    
    for (int i = 0; i < length; i++) {
    	int c = str[i];
    	if (isspace(c))
        	count++;
    }
    
    cout << "Number of words: "<< count + 1<< endl;
    
    cout << "The number of characters without spaces: "<< length - count << endl;
    
    cout << "The number of characters with spaces: "<< length << endl;
    
    cout << "The spaces are: "<< count;
}
