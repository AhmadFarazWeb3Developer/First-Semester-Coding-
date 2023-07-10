#include<iostream>
using namespace std;
int main()
{
	int i,n;
	int factorial=1;
	cout<<"\tEnter a number for  factorial::";
	cin>>n;
	for(i=1; i<=n;i++)
	{
	factorial=factorial*i; 
	
	 } 
	 cout<<"\n\n\t Factiral of enterd number is::"<<factorial;
}
