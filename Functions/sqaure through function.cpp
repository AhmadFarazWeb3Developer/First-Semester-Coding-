
//Create a C++ program that prompts the user to enter a number using a function. The function
//returns the value given by user to the main function,find square of that value through another.
#include<iostream>
using namespace std;
void square(int x);
int main()
{ int i;
cout<<"\n\n\tEnter number for square :: ";
cin>>i;
square(i);
}
void square(int x){
int s= x*x;
cout<<"\n\n\tSquare of entered number is :: "<<s;
}