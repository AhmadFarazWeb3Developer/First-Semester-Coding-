#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"\t Enter any year::";
	cin>>year;
	if(year%4==0)// any year is fully divisible by 4 is leaf year.
	{
	cout<<"\n\n\tyear is leaf year\n\n";
	}
	else if(year%100==0 && year%400==0 )// any year divisible by 100 and 400
	{                                  // is leaf year.
	
	cout<<"\n\n\t year is leaf year\n\n";
	}
	else
	{
		cout<<"\tYear is not leaf year";
	}
	return 0;
}
