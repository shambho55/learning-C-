#include <iostream>
using namespace std;

int minStepsTo1(int n,int count){
	if(n == 1) return count;
	int i = 0,j = 0,k = 0;
	if(n % 2 == 0) i = minStepsTo1(n / 2,count + 1);
	if(n % 3 == 0) j = minStepsTo1(n / 3,count + 1);
	k = minStepsTo1(n - 1,count + 1);
	return min(min(i,j),k);
} 

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int ans = minStepsTo1(n,0);
	cout << ans << "\n";
}
