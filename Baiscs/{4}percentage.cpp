#include<iostream>
#include<string.h> //hearder file for string fuction.
using namespace std;
int main()
{
	char name[20];  // this how to intialize 
	              // lenght of character more than one byte
	float percentage,marks;
	cout<<"\n\t Enter the name of student :: ";
	cin>>name;
	cout<<"\n\tEnter the  marks :: ";
	cin>>marks;
	percentage=marks/500.0*100;
	cout<<"\n\tThe percentage is :: ";
	cout<<percentage<<"%";
	return 0;
	
}
