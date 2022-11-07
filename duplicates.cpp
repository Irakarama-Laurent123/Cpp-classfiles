#include <bits/stdc++.h>

using namespace std;

int main () {
  int i,j;
  int number[] = {2,3,4,5,6,2,3,4,3,4,4,5};
  int occurences=  0;
  
  for(i=0; i<12; i++)
   {
    for(j=i+1;j<12;j++)
    {
    	if(number[i] == number[j]){

			occurences++;
		}
    	
   }
   cout<<occurences;
   }
//  getch();
 }
