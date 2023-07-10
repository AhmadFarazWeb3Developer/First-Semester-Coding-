#include<iostream>
using namespace std;
int main()
{
	int temp;
	cout<<"\tEnter tempreture::";
	cin>>temp;
	if(temp>35)
	{
		cout<<"\tHot day\n\n";
	}
	else if(temp>25 && temp<35)
	{
	cout<<"\tPleasent day\n\n";
	}
	else if (temp<25)
	{
		cout<<"\tCool day\n\n";
		
	}
	else {
	cout<<"\tEnter proper temprature\n\n";
	}
	return 0;
}
