#include <iostream>
using namespace std;
int x;

int main(){
	// int y;
	// cout << x << endl;
	// cout << y << endl;
	// ;

	int i = 5;
	int l = i / -2;
	int k = i % -2;
	cout << l << " " << k << endl;
	cout << (5 > 4 && 3 > 1) << endl;

	int m = -(-3);
	int n = m++ + m;	
	cout << n << endl;
	int x = 20,y,z;
	y = x = 10;
	z = x < 20;
	cout << z << " " << x << " " << y << endl;
}