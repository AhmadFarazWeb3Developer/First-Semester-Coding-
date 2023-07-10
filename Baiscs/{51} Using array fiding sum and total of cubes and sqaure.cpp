#include<iostream>
using namespace std;
int main()
{
	int i,n[10],sq[10],cube[10],sum[10];
	int total=0;
	for(i=0; i<10; i++)
	{
		n[i]=i;
		sq[i]=i*i;
		cube[i]=i*i*i;
sum[i]=n[i]+sq[i]+cube[i];		
	}
	for(i=0; i<=10; i++)
{
cout<<"\n\n\tSUM OF "<<i+1<<" is::"<<sum[i];
total= total+sum[i];
}
cout<<"\n\n\t Grand sum is :: "<<total;
}
