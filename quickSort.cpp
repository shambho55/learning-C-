#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll Partition(vector<ll> &a,int left,int right){
	int pivot = left;
	int end = a[right],temp = 0;

	for(int i = left;i <= right;i++){
		if(a[i] < end){
			temp = a[i];
			a[i] = a[pivot];
			a[pivot] = temp;
			pivot++;
		}
	}
	temp = a[pivot];
	a[pivot] = a[right];
	a[right] = temp;

	return pivot;
}

void quickSort(vector<ll> &a,int start,int end){
	if(start >= end) return;
	ll pivot = Partition(a,start,end);
	quickSort(a,start,pivot - 1);
	quickSort(a,pivot + 1,end);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cout<<fixed;
	cout<<setprecision(10);

	int n;
	cin >> n;
	vector<ll> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	quickSort(a,0,n - 1);		
	for(int i = 0;i < n;i++) cout << a[i] << " ";
	cout << "\n";
	return 0;
}