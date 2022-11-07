#include <iostream>
#include <algorithm>
using namespace std;

int sort(int arr[3]) {
	if(arr[1] < arr[0]){
		swap(arr[0], arr[1]);
	}
	if(arr[2]< arr[1]){
		swap(arr[1], arr[2]);
		if(arr[1] < arr[0]){
			swap(arr[1], arr[0]);
		}
	}
}

int main() {
	int arr[3];
	
	
	cout << "Input the three numbers: ";
	cin >> arr[0] >> arr[1]>> arr[2];
	sort(arr);
	
		for(int i = 0; i< 3; i++){
		cout << arr[i] << " ";
	}
	return 0;
	
}
