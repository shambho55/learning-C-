#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n <= 70) cout << "0" << "\n";
		else if(n > 70 && n <= 100) cout << "500" << "\n";
		else cout << "2000" << "\n";
	}
}