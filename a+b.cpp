#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		int output = 0;
		for(int i = 0;i < str.length();i++){
			if(str[i] != '+'){
				int a = int(str[i]) - int('0');
				output += a;
			}
		}
		cout << output << "\n";
	}
}