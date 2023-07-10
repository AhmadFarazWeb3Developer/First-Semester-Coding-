/* 

 1!+2!+3!+4!+5!....+n!

finding the sum of factorial series sum. 
it is very usefull program */

#include<iostream>
using namespace std;
int main()
{
	int i,n;
	int sum=0; // memory allocation for sum..
	int factorial=1; //factorial starts from 1..
	cout<<"\tEnter a number for factorial sum::";
	cin>>n;
	for(i=1; i<=n; i++)// desirable altration will occur...
	{
		factorial=factorial*i;// factorial ..
		sum=sum+factorial;//sum is here..
		}
cout<<"\n\n\t sum of the factorial series"<<sum;

		return 0;
}

