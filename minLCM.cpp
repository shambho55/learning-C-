#include<bits/stdc++.h>
using namespace std;


vector<int> getLCM(int n){
	vector<int> output;	
	for(int i = 1;i < n;i++){
		if(n % i == 0) output.append(i);
	}
	return output;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		
	}
}