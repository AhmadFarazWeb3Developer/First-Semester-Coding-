/* This program is used to find the common divisor for two
             numbers*/
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three number::\n";
	cin>>a>>b>>c;
	if(a==0)
	{
		cout<<"Divisor cannot be zero\n";
		
	}
	else{
		if(b%a==0&&c%a==0)                         // Here if b,c the result is equal to zero for both case then//
  		{                                          // the statement will executed , other wise the else part will be 
		cout<<a<<"::is a common divisor of::"<<b<<"::"<<c;           // be executed//
		}
		else
		{
			cout<<a<<":: is not common divisor of::"<<b<<"::"<<c;
		}
	}
	return 0;
} 
