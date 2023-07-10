/* 04 (Recursive Exponentiation) Write a recursive function power( base, exponent ) that, when
invoked, returns base exponent For example, power( 3, 4)=3*3*3*3. Assume that exponent is an
integer greater than or equal to 1. */
#include<iostream>
using namespace std;
int power(int base, int expo);//Function decleration
int main() {
	int base, expo;
	cout<<"\n\n\tEnter the base for power :: ";
	cin>>base;//base value
	cout<<"\n\n\tEnter the exponenent :: ";
	cin>>expo;//exponent value
	cout<<"\n\n\tPower of the number is :: "<<power(base, expo);//function call
}
int power(int base, int expo) {
	if(expo==0)//base case
		return 1;
	else
		return
		    base*power(base, expo-1);//recursie case
}