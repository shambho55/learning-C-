#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int countL = 0,countD = 0;
	for(int i = 0;i < s.size();i++){
		if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)){
			countL++;
		}
		else if(s[i] >= 48 && s[i] <= 57){
			countD++;
		} 
	}
	cout << countD << "\n" << countL << "\n"; 
}