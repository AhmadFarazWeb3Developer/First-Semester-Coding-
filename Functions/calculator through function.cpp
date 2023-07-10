//Write a C++ program that will display the calculator menu.
//The program will prompt the user to choose the operation choice (from 1 to 5). Then it asks
//the user to input two integer vales for the calculation. See the sample below.


#include<iostream>
using namespace std;
int calculator(int a,int b,int c);
int main() {
	int a,b,c;
	cout<<"\n\t  MENU ";
	cout<<"\n\t1. Add";
	cout<<"\n\t2. Subtract";
	cout<<"\n\t3. Multiply";
	cout<<"\n\t4. Divide";
	cout<<"\n\t5. Modulus";
	cout<<"\n\n\tEnter operation number :: ";
	cin>>a;
	cout<<"\n\n\tEnter first number :: ";
	cin>>b;
	cout<<"\n\n\tEnter second number :: ";
	cin>>c;
	cout<<"\n\n\tResult : "<<calculator(a,b,c);
}
int calculator(int a,int b,int c) {
	if(a==1)
		return b+c;
	if(a==2)
		return b-c;
	if(a==3)
		return b*c;
	if(a==4)
		return b/c;
	if(a==5)
		return b%c;
}