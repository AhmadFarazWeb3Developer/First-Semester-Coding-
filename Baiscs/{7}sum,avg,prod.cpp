#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d,sum,prod,avg;
	cout<<"Enter a,b,c,d,\n";
	cin>>a;
	cout<<"\n";
	cin>>b;
	cout<<"\n";
	cin>>c;
	cout<<"\n";
	cin>>d;
	cout<<"\n";
	cout<<"Sum of the numbers::";
    sum=a+b+c+d;
    cout<<sum;
    cout<<"\nProuct of the numbers::";
    prod=a*b*c*d;
    cout<<prod;
    cout<<"\nAverage of the numbers::";
    avg=(a+b+c+d)/4.0;
    cout<<avg;
return 0;
}
