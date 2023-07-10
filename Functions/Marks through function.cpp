//Write a program which will ask the user to enter his/her marks (out of 100). Define a function
//that will display grades according to the marks entered as below.
#include<iostream>
using namespace std;
void  marks(int x);
int main()
{
	int m;
	cout<<"\n\n\tEnter the marks :: ";
	cin>>m;
	marks(m);
}
void marks(int x)
{
	if(x>=91 && x<=100)
		cout<<"\n\n\tAA Grade";
	else if(x<=90 && x>=81)
		cout<<"\n\n\tAB Grade";
	else if(x>=71 && x<=80)
		cout<<"\n\n\tBB Grade";
	else if(x>=61 && x<=70)
		cout<<"\n\n\tBC Grade";
	else if(x>=51 && x<=60)
		cout<<"\n\n\tCD Grade";
	else if(x>=41 && x<=50)
		cout<<"\n\n\tDD Grade";
	else if(x<=40)
		cout<<"\n\n\t Fail";
}