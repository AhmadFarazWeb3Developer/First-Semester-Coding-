/* the main use of memory allocation  of sum=0; 
and also hpw to add a series b using increament */

#include<iostream>
#include<cmath>
using  namespace std;
int main()
{
	int n,x;
	int sum=0; // the first value must be 0 for memory allocation.
	cout<<"\t Enter Base value 'x'::";
	cin>>x;
	cout<<"\n\n\t Enter power number 'n'::";
	cin>>n;   // n is the range of power where it
	           // is need  to go .
for(int i=1; i<=n; i++)
{
	sum=sum+pow(x,i); //This is the proper way to write power 
}                      // and i is used as increment in power.
cout<<"\n\n\\t"<<sum;
	return 0;
} 
