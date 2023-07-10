#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,c;
	
	for(c=1; c<=2; c++)// this alteration for to print the shapes again and again
{
	int n=8;// intalizaton is here because that for the the  
	//second altration the value of n will same for n;
	for(i=1; i<=5; i++)
	{
		cout<<"\t";
		for(j=1;j<=i; j++)// loop for upper stariks
		{
			cout<<"*";
		}
		for(k=1;k<=n;k++)// loop for upper spaces
		{
			cout<<" ";
        }
		for(l=1; l<=i;l++)// loop for upper stariks after spaces  
	   {
		cout<<"*";
	   }
	   n=n-2;      // value of spaces decreases here;
	   cout<<"\t\n";
	
    }// the first uper half is completed here

    int b=2;     // initializaton of b is here because, 
                 // for second altration the value of b will be same as 2
	
	for(i=1; i<=4; i++){//aleration for the lower half
		cout<<"\t";
		for(j=4; j>=i; j--)//lower first stariks loop
		{
			cout<<"*";
		}
		{
		for(k=1; k<=b; k++)// loop for spaces
		{
			cout<<" ";
		}
		for(l=4; l>=i; l--)//lower halp loop for stariks after spaces
		{
			cout<<"*";
		}
		b=b+2;// the of spaces value increase after alteration completion
		cout<<"\n";
	     }
	}}
	return 0;
}
