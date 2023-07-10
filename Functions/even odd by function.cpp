//Define a program that continuously takes input from user and on each input find out whether
//a given number is even or odd. The program ends if user enters 0 as input.
#include<iostream>
using namespace std;
int EvenOdd(int n);
int main()
{
	int n;
	cout<<"\n\n\tEnter the number :: ";
	cin>>n;
	do
		{
			EvenOdd(n);
			cout<<"\n\n\tEnter the number :: ";
			cin>>n;
		}
	while(n!=0);
	cout<<"\n\n\tProgram terminated ";
}
int EvenOdd(int n)
{
	if(n%2==0)
		cout<<"\n\tNumber is EVEN ";
	else
		cout<<"\n\tNumber is ODD ";
}