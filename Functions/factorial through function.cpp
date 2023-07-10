//Design a C++ program which calculates the factorial of any number entered by the user.
//a. Use ‘int’ as a return type.
//b. Use‘void’as a return type.

#include<iostream>
using namespace std;
int factorial(int n);
void fact(int n);
int main() {
	int n;
	cout<<"\n\n\tEnter num ber for factorial :: ";
	cin>>n;
	int number=factorial(n);
	cout<<"\n\n\tFactoril through int return type :: "<<number;
	fact( n);
}
int factorial(int n) {
	int fact;
	if(n==1)
		return 1;
	else
		return n*factorial(n-1);
}
void fact(int n) {
	int factorial=1;
	for(int i=n; i>=1; i--) {
		factorial=factorial*i;
	}
	cout<<"\n\n\tFactorail through void return type :: "<<factorial;
}