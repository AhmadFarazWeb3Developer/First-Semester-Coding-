#include<iostream>
using namespace std;
int main()
{
float i=1.0;
float j=4.0;
cout<<"\tThe given series is\n\n";
cout<<"\t1+1/4+1/8+......1/100";
do
{
i=1+1.0/j;
j=j+4.0;	
}
	while(j<=100);
{

	cout<<"\n\n\tSum of the given series is ::"<<i;
	
}

return 0;
}
