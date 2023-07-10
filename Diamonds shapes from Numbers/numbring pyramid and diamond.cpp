/*A very important program where we have to print
the following shape 
repectively .

        1
   	  2 2 2
     3 3 3 3 3
   4 4 4 4 4 4 4
 5 5 5 5 5 5 5 5 5
   4 4 4 4 4 4 4
     3 3 3 3 3 
      2 2 2
        1
   
   */      
#include<iostream>
using namespace std;
int main()
{
	int i,n,j,space;
	cout<<"\tEnter value of n for spaces"<<endl;
	cin>>n;  // desired value for, how many spaces we want before stars. 
	for(int c=1; c<=2; c++) //This alteration for number of diamonds.
	{
	for(i=1; i<=5; i++)
	{
		for(space=1; space<=n-i; space++)
		{ 
	    cout<<" ";
        }
		for(j=1; j<=2*i-1; j++)
		{
		cout<<i;
		}
       cout<<endl;
        } 
       for( i=4; i>=1; i--) // here i used value 4 because to remove 
	                        //one row of 5 from the out put ;
        {
       	for(space=1; space<=n-i; space++)
        {
      	cout<<" ";	
	    }
		   for (j=1; j<=2*i-1; j++)
        {
	 	   	cout<<i;
	    }
         cout<<endl;	   
	   }}	
	return 0;
}
