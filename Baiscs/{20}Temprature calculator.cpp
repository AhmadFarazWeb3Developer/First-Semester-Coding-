/* This program is used to find the 
temprature in celsius or fehreneit*/
#include<iostream>
using namespace std;
int main()
{
char letter;
float C,F,temp;
cout<<"\tEnter Temprature::";
cin>>temp;
cout<<"\tINSTRUCTIONS\n";
cout<<"Enter F for converting temprature from Celsius to Fahrenheit\n";
cout<<"Enter C for converting temprature from Fahrenheit to Celsius\n";
cout<<"\t Enter a letter\n";
cin>>letter;
if(letter=='F')
{
	cout<<"\tTemprature in Fahrenheit\n";
	F=(9.0/5.0)*(temp+32);
	cout<<"\t"<<F<<"farhenheit\n";
	}
	else if(letter=='C')
	{
	cout<<"\tTemprature in Celsius\n";
	C=(5.0/9.0)*(temp-32);
	cout<<"\t"<<C<<"Celsius\n";	
	}
	else
	{
		cout<<"\tTry again\n";
		cout<<"\tYou enter wrong letter\n";
		cout<<"Please read carefully the above instructions";
	}
	return 0;
}
