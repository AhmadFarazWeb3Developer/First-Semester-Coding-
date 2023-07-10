   /* This program is for to take numbers from
     user and display its output as vertical.  
     Its the very important program and remendious 
     proram for leaarning of modolus and division.*/

#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c,d;
/*	Entry of digits depend of user*/
	cout<<"entre four digit::::";
	cin>>n;
	a=n/1000;
	n=n%1000;     // Due to modulus, reminder value asssigned to// 
	b=n/100;       //n, here old value of changed //
	n=n%100;
	c=n/10;
	d=n%10;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	return 0;
	
}
