/*  Armstrong number:

E.G (1*1*1) + (5*5*5) + (3*3*3) =  153

their split cubes are equal to the enterd number   */

#include<iostream>
using namespace std;
int main()
{
	int i,r,sum,n,num,limit;
	cout<<"\n\n\t Enter limit::";
	cin>>limit;
	for(num=1;num<=limit; num++)
	{
	n=num; // Here the value is taken from the loop 
	       //which is increasing time to time
    sum=0; // In new altration sum value becomes zero;
	while(n !=0)
	{
	
		r=n%10;
		sum=sum+(r*r*r);
		n=n /10; // here n value changes
		if(sum==num)
		cout<<"\n\n\t"<<num;
}

				}
		
			return 0;
			
}
