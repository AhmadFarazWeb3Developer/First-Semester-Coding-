//Design a simple C++ function that receives two numbers as an argument and display all the
//prime numbers between these two numbers. Call this function from main( ).
#include<iostream>
using namespace std;
int prime( int n);
int main() {
	int k1, k2;
	bool a;
	cout<<"\n\n\tEnter first number :: ";
	cin>>k1;
	cout<<"\n\n\tEnter second number :: ";
	cin>>k2;
	if(k1>k2) {
		k2=k1+k2;
		k1=k2-k1;
		k2=k2-k1;
	}
	for(int b=k1+1; b<k2; ++b) {
		a=prime(b);
		if(a)
			cout<<"\n\t"<<b;
	}
	return 0;
}
int prime( int n) {
	int count =0;
	for(int i=2; i<=n; i++) {
		if (n%i==0) {
			count++;
			break;
		}
		if(count==1)
		cout<<i;
	}
}