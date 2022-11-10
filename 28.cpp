// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

int main () {
	string str="aBcDeF";
	int length = str.size();
	for (int i = 0; i < length; ++i)
	{
    	str[i] = toupper(str[i]);
	}
	cout << str << endl;
}
