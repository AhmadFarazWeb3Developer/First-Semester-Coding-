 
 
 /* A very important  program to print Fibonnaci series
with the help of whie loop */

#include<iostream>
using namespace std;
int main()
{
	int a,b,limit,next;
	cout<<"\t Enter the limit of fibonnaci series::";
	cin>>limit;
	a=0;
	b=1;
	next=a+b;        // inialization of next
	while(next<=limit)  // limit
	{
		next=a+b;
		cout<<"\n\n\t"<<next;
		a=b;        //value of b issigned to a
		b=next;    //value of next is assigned to b
		next=a+b;   // here it is accumulated the result to 
		       //tell the compiler the limit for nexr loop;
	}
	return 0;
}

