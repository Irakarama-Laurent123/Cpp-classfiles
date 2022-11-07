#include <iostream>
#include <string>
using namespace std;

int main(){
    string string1;
    int i, len;
    int flag = 0;
    
    cout << "Enter a string: "; cin.getline(string1, 100);
    
    len = string1.size();
    
    for(i=0;i < len ;i++){
        if(string1[i] != string1[len-i-1]){
            flag = 1;
            break;
           }
        }
    
    if (flag) {
        cout << string1 << " is not a palindrome" << endl; 
    }    
    else {
        cout << string1 << " is a palindrome" << endl; 
    }
    system("pause");
    return 0;
}


