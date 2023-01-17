#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll merge(vector<ll> &a,int start,int mid,int end){
	vector<ll> left,right;
	for(int i = start;i <= mid;i++) left.push_back(a[i]);
	for(int i = mid + 1;i <= end;i++) right.push_back(a[i]);
	ll total = 0;
	ll n = left.size(),m = right.size(),left_ptr = 0,right_ptr = 0,curr = start;
	while(left_ptr < n && right_ptr < m){
		if(left[left_ptr] < right[right_ptr]){
			a[curr++] = left[left_ptr++];
		}
		else{
			a[curr++] = right[right_ptr++];
			total += (n - left_ptr);
		}
	}
	while(left_ptr < n){
		a[curr++] = left[left_ptr++];
	}
	while(right_ptr < m){
		a[curr++] = right[right_ptr++];
	}
	return total;
}

ll countInversions(vector<ll> &a,int start,int end){
	if(start >= end) return 0;
	ll total = 0;
	int mid = start + (end - start) / 2;
	total += (countInversions(a,start,mid));
	total += (countInversions(a,mid + 1,end));
	total += merge(a,start,mid,end);

	return total;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cout<<fixed;
	cout<<setprecision(10);

	int n ;
	cin >> n;
	vector<ll> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];	
	ll ans = countInversions(a,0,n - 1);		
	cout << ans << "\n";

	return 0;
}