/* Find ing the average of 10 
numbers and display the numbers
 which are greater then average 
             */ 

#include<iostream>
using namespace std;
int main()
{
	int  i;
	float n[10];
	float sum=0;
	float avg=0;
	for(i=0; i<10; i++)
	   {
		        cout<<"\n\n\t Number "<<i+1<<" is :: ";
	          	cin>>n[i];
	   }   
	         for(i=0; i<10; i++)
	          {
	          sum=sum+n[i];
	           }
	           cout<<"\n\n\tSum is :: "<<sum;
               avg=sum/10.0;
                  cout<<"\n\n\tAverage is :: "<<avg;
	           for(i=0; i<10; i++)
	       {
		        if(n[i]>avg)
		     cout<<"\n\n\t"<<n[i]<<endl;
     	    }
	return 0;
}
