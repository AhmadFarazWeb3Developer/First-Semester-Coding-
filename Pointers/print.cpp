#include<iostream>
#include<string>
using namespace std;
char *Reverse_it(char *str) 
{
	int i,len=0,n;
	char temp;
	len=strlen(str);
	n=len-1;
	for(i = 0; i <=(len/2); i++) 
	{
		temp=str[i];
		str[i]=str[n];
		str[n]=temp;
		n--;
	}
	return str;
}
int main() 
{
	char String [] ="Reversing A Character";
	cout <<String <<endl;	
	Reverse_it(String);
	cout <<"*********" <<endl;
	cout <<"The Reversed Form IS:" <<endl;
	cout <<"\n" <<String;
	return 0;
}