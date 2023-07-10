// Write a function called swap() that interchanges two int values passed to it by the calling
//program. (and display it). Create a main() program to exercise the function.
#include<iostream>
using namespace std;
void swap(int a,int b);
int main() {
	int c,d;
	cout<<"\n\tEnter first variable :: ";
	cin>>c;
	cout<<"\n\tEnter second varible :: ";
	cin>>d;

	swap(c,d);
}
void swap(int a, int b) {
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\n\tFirst  variable become :: "<<a;
	cout<<"\n\tSecond variable become :: "<<b;
}