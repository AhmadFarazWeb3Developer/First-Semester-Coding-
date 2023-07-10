/* This program is used to print the 
sum of five digint number collecivelly.
This program is all about to tought
 me diision and modulus.Its a very usefull rogram, */
 
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,n,sum;
	cout<<"Enter a five number digit"<<endl;
	cin>>n;
	a=n/10000;       // Value of n keeps changing//
	n=n%10000;       //step by step.//
	b=n/1000;
	n=n%1000;
	c=n/100;
	n=n%100;
	d=n/10;
	n=n%10;
	sum=a+b+c+d+n;
	cout<<"Sum of the digits are given"<<endl;
	cout<<sum;
	return 0;	
}
