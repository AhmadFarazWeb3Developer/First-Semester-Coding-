/*converting age from years to
 months and days*/
#include<iostream>
using namespace std;
int main()
{
	float age,days,months;
	cout<<"Enter your age::::";
	cin>>age;
	cout<<"\nYour age in months is::::";
    months=age*12;
	cout<<months;
	cout<<"\nYour age in days::::";
	days=age*365;
	cout<<days;
	return 0;
}
