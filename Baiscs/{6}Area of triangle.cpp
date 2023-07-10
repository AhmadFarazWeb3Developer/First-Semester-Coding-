#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c;
	double s,Area; 
	cout<<"Enter values of a,b,c \n";
	cin>>a;
	cout<<"\n";
	cin>>b;
	cout<<"\n";
	cin>>c;
	cout<<"\n";
	cout<<"Value of S \n";
	s=(a+b+c)/2.0;
	cout<<s;
	cout<<"\n Value of area is given\n ";
	
Area = sqrt(s*(s-a)*(s-b)*(s-c));
cout<<Area<<"sq.m";
return 0;
}
