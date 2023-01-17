#include <bits/stdc++.h>
using namespace std;

void countingSort(vector<int> arr,int size){
	int maxi = INT_MIN,mini = INT_MAX;
	for(int i = 0,j = size - 1;i < size ,j >= 0;i++,j--){
		if(arr[i] < mini) mini = arr[i];
		if(arr[i] > maxi) maxi = arr[i];
	} 
	vector<int> freqArr(maxi);
	for(int i = 0;i < size;i++){
		freqArr[arr[i]]++;
	}

}

int main(){
	cout << "Hello World!" << endl;
}
