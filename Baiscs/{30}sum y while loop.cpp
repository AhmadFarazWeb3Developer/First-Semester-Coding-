/* This program is used to find the sum 
of enterd integer*/

#include<iostream>
using namespace std;
int main()
{
int i=1;
int j=0;
cout<<"Num\tSum\n";
	while(i<=5)
	{
		j=i+j;
		cout<<i<<"\t"<<j<<"\n";
		++i;
	
	}
	return 0;
}
