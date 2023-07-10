//A palindrome number is a number that is same after reverse. For example 121, 34543, 343, 131, 48984
//are the palindrome numbers
#include<iostream>
using namespace std;
	int sum=0, r;
int palindrom(int n ) {
if(n==0) {
	return sum;
	} 
else  {
	 r=n%10;
sum=(sum*10)+r;
	return palindrom(n/10);
} 
}
int main() {
	int n;
	cout<<"\n\n\tEnter the Number=";
	cin>>n;
	palindrom(n);
	if(sum==n)
		cout<<"\n\n\tNumber is Palindrome.";
	else
		cout<<"\n\n\tNumber is not Palindrome.";
	return 0;
}