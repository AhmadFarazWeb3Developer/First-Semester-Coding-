/* this program is used to find 
tax on salary of a worker*/
#include<iostream>
using namespace std;
int main()
{
	int salary;
	float income,tax;
	cout<<"\tEnter salary::";
	cin>>salary;
	if(salary>30000)
	{
		tax=salary*20.0/100.0;
		cout<<"\n\n\t"<<tax;
	}
	else if(salary>=20000&&salary<=30000)
	{
		tax=salary*15.0/100.0;
		cout<<"\n\n\t"<<tax;
	}
	else
	{
		tax=salary*10.0/100.0;
		cout<<"\n\n\t"<<salary;
	}
	cout<<"\n\n\tThe new salary is::";
   income=salary-tax;
   cout<<"\n\n\t"<<income;
	return 0;
}
