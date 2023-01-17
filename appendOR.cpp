#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
    int n,y;
    cin >> n >> y;
    vector<int> a(n);
    int ans = 0;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        ans = (ans | a[i]);
    }
    int x = -1;
    for(int j = 0;j <= y;j++){
    if((ans | j) == y){
        x = j;
        break;
    }
    }
    cout << x << "\n";    
    }
	return 0;
}
