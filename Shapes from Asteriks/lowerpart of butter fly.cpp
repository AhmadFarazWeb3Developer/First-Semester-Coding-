#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
int n=2;
	for(i=1; i<=4; i++)
	{
		cout<<"\t";
		for(j=4; j>=i; j--)
		{
			cout<<"*";
		}
		{
		for(k=1; k<=n; k++)
		{
			cout<<" ";
		}
		for(l=4; l>=i; l--)
		{
			cout<<"*";
		}
		n=n+2;
		cout<<"\n";
	}}
	return 0;
}
