/* 01 write a function called zeroSmaller() that is passed two int arguments by reference and then
sets the smaller of the two numbers to 0. Write a main() program to exercise this function.*/
#include<iostream>
using namespace std;
int  zerosmaller(int &x, int &y);//fnction decleration
int main() {
	int a, b;
	cout<<"\n\n\tEnter first value :: ";
	cin>>a;//first value
	cout<<"\n\n\tEnter seocnd value :: ";
	cin>>b;//second value
	zerosmaller(a,b);//function call
	cout<<"\n\n\tFirst number is : "<<a;//value of a after function call
	cout<<"\n\n\tSecond number is : "<<b<<endl;//value of b after faction call
	return 0;
}
int zerosmaller(int &x, int &y) {//function definition
	if(x<y) {//condition for values 
		return x=0;
	} else {
		return y=0;
	}
}
