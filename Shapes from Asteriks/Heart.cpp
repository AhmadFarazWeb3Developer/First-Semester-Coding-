|\
/*Here we are going to print heart logo by using c++ 
program.
example:

    ***         ***
   *****       *****
  *******     *******
 *********   *********
 *********************
 *********************
  *******************
   ****************
    **************
      **********
         ****
          **
          */

#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	
int n=8;	
int c=9;
// intalizaton is here because that for the the  
	//second altration the value of n will same for n;
	cout<<"\n\n";
	for(i=5; i<=9; i++)
	{
		cout<<"\t\t";
		for(j=1;j<=i; j++)// loop for upper stariks
		{
			cout<<"+";
		}
		for(k=1;k<=n;k++)// loop for upper spaces
		{
			cout<<" ";
        }
		for(l=1; l<=i;l++)// loop for upper stariks after spaces  
	   {
		cout<<"+";
	   }
	   n=n-2;      // value of spaces decreases here;
	   cout<<"\t\n";
}
	   
	     for( i=9; i>=1; i--)//lower half starts from here
        {
        	cout<<"\t\t";
       	for(int space=1; space<=c-i; space++)
        {
      	cout<<" ";	
	    }
		   for (j=1; j<=2*i-1; j++)
        {
	 	   	cout<<"+";
	    }
         cout<<endl;	   
	   }
return 0;
}
