#include <iostream>
using namespace std;

int fib(int n){
	if(n == 0 || n == 1) return n;
	return fib(n - 1) + fib(n - 2);
}

int fibDP(int n,int *arr){
	if(n == 0 || n == 1) return n;
	if(arr[n] > 0) return arr[n];
	int output = fibDP(n - 1,arr) + fibDP(n - 2,arr);
	arr[n] = output;
	return output;
}

int fibI(int n){
	int *arr = new int[n + 1];
	arr[0] = 0;
	arr[1] = 1;
	for(int i = 2;i <= n;i++){
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	int output = arr[n];
	delete [] arr;
	return output;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int *arr = new int [n + 1];
	int ans = fibDP(n,arr);
	int ans1 = fib(n);
	int ans2 = fibI(n);
	cout << "fib using DP : " << ans << "\n";
	cout << "fib recursively : " << ans1  << "\n";
	cout << "fib iteratively : " << ans2  << "\n";
	delete [] arr;
}