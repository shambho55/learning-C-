#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &a,int start,int mid,int end){
	vector<int> left,right;
	for(int i = start;i <= mid;i++) left.push_back(a[i]);
	for(int i = mid + 1;i <= end;i++) right.push_back(a[i]);
	int n = left.size(),m = right.size();	
	int left_ptr = 0,right_ptr = 0,curr = start;
	while(left_ptr < n && right_ptr < m){
		if(left[left_ptr] < right[right_ptr]){
			a[curr++] = left[left_ptr++];
		}
		else{
			a[curr++] = right[right_ptr++];
		}
	}
	while(left_ptr < n){
		a[curr++] = left[left_ptr++]; 
	}
	while(right_ptr < m){
		a[curr++] = right[right_ptr++];
	}
}


void mergeSort(vector<int> &a,int start,int end){
	if(start >= end){
		return ;
	}
	int mid = start + (end - start) / 2;	
	mergeSort(a,start,mid);
	mergeSort(a,mid + 1,end);
	merge(a,start,mid,end);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cout<<fixed;
	//cout<<setprecision(10);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	mergeSort(a,0,n - 1);
	for(int i = 0;i < n;i++) cout << a[i] << " ";
	cout << "\n";	
}