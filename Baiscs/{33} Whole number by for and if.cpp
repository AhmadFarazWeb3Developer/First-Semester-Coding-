/* A very important program*/ 
#include<iostream>
using namespace std;
int main()
{
	int smallest,largest,value;
	int n=10;
	float total;
	cout<<"\tplease enter a whole number\n\n";
    cin>>value;
    largest= value;
	smallest=value;
	total=value;
    for(int j=0; j<n; ++j)
    {
    	cout<<"\tplease enter another number\n\n";
    	cin>>value;
    	total =total+value;
    	if(value>largest)
    	largest=value;
    	if(value<smallest)
    	smallest=value;
	}
	cout<<"\tLargest value is::"<<largest;
	cout<<"\n\n\tsmallest value is::"<<smallest;
	cout<<"\n\n\tAerage value is::"<<total/n;
return 0;
}
