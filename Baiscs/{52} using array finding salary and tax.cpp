/* finding salaries greater then 250000/-
using array */

#include<iostream>
using namespace std;
int main()
{
	int i,n,sal[10];
	char emp[10][30];
cout<<"\n\tEnter the number of employees :: ";
	cin>>n;
	for(i=0; i<n; i++)
	{
		cout<<"\n\tEnter the name of employee "<<i+1<<" :: ";
		cin>>emp[i];
		cout<<"\n\tEnter the salary of employee "<<i+1<<" :: ";
		cin>>sal[i];
	}
	for( i=1; i<10; i++)
	{
		if(sal[i]>=250000)
		{
			cout<<"\n\temployee name ::"<<emp[i];
			cout<<"\n\tsalary :: "<<sal[i];
			cout<<"\n\t  Tax be paid";
		}
		else
		{
			cout<<"\n\n\temployee name :: "<<emp[i];
			cout<<"\n\tsalray :: "<<sal[i];
			cout<<"\n\t No tax to be paid";
		}
		
	}
	return 0;
}
