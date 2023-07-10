#include<iostream>
using namespace std;
int main()
{
	int i,space,c, j;
	  
	     for( i=9; i>=1; i--) // here i used value 4 because to remove 
	                        //one row of 5 from the out put ;
        {
       	for( space=1; space<=c-i; space++)
        {
      	cout<<" ";	
	    }
		   for (j=1; j<=2*i-1; j++)
        {
	 	   	cout<<"*";
	    }
         cout<<endl;	   
	   }
	   return 0;
}
