//• Write a C++ program that implements a four-function simple calculator using functions, for each
//of the four arithmetic operations(+, - , ÷, ×). They can be called fadd(), fsub(), fmul(), and fdiv().
//Each of these functions should take two arguments of type integer fraction, and return an
//argument of the same type.
#include<iostream>
using namespace std;
float fadd(float a,float b);
float fsub(float a,float b);
float fmul(float a,float b);
float fdiv(float a,float b);
int main() {
	float c,d;
	cout<<"\n\n\tEnter first number :: ";
	cin>>c;
	cout<<"\n\n\tEnter second number :: ";
	cin>>d;
	cout<<"\n\n\tAddition is :: "<<fadd(c,d);
	cout<<"\n\n\tSutraction is :: "<<fsub(c,d);
	cout<<"\n\n\tMultiplition is :: "<<fmul(c,d);
	cout<<"\n\n\tDivision is :: "<<fdiv(c,d);
}
float fadd(float a,float b) {
	return a+b;
}
float fsub(float a,float b) {
	return a-b;
}
float fmul(float a,float b) {
	return a*b;
}
float fdiv(float a,float b) {
	return a/b;
}











