/* A very important program to find the sum of 
the following series..

1+ 2x +3x^2 +4x^3 +5x^4.

 i wrote the below progam by my own mind but it is working */ 

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int c,i,sum,New,x;
	cout<<"\t Enter base value::";
	cin>>x;
	sum=1;
	for(i=2; i<=5; i++)
	{
		c=i-1;
		New= i*pow(x,c);
		sum=sum+New;
	}
	cout<<"\n\n\t"<<sum;
	return 0;
}
