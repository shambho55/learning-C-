#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	map <string,int> mp;

	while(t--){
		string s;
		cin >> s;
		if(mp[s] > 0) cout << "YES" << endl;
		else{
			mp[s] = 1;
			cout << "NO" << endl;
		}
	 	}
 
}