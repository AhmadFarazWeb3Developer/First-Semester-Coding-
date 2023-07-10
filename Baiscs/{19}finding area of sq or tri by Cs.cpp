/* This program is all about by calling area 
by letter S and T */

#include<iostream>
using namespace std;
int main()
{
	char letter;
	float base,side,Square,Triangle;
	cout<<"\tEnter Base and Square\n";
	cin>>base>>side;
	Square=side*side;
	Triangle=(1.0/2.0)*base*side;
	cout<<"\tEnter S for sqaure OR T for triangle Area\n";
	cin>>letter;
	if(letter=='S')
	{
		cout<<"\tArea of sqaure::";
		cout<<Square;
	}
	else if(letter=='T')
	{
		cout<<"\tArea of Triangle::";
		cout<<Triangle;
	}
	else
	{
		cout<<"\tTry Again\n";
		cout<<"\tRead carefully the above instructions";
	}
	return 0;
}
