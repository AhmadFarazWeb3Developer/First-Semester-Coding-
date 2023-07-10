#include <iostream>
using namespace std;
int GCD(int x, int y);
int main() {
	int n1, n2, hcf;
	cout <<"\n\n\tEnter first number :: ";
	cin >>n1;
	cout<<"\n\n\tEnter second number :: ";
	cin>>n2;
	cout<<"\n\n\tGreatest Common Divsior is :: "<<GCD(n1,n2);
	return 0;
}
int GCD(int x, int y) {
	int hcf;
	if ( y > x) {
		int temp = y;
		y = x;
		x = temp;
	}
	for (int i = 1; i <=  y; i++) {
		if (x % i == 0 && y % i ==0) {
			hcf = i;
		}
	}
	return hcf;
}