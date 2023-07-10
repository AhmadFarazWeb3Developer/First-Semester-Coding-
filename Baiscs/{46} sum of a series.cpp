/*  series is given below

1/2 + 2/3 + 3/4 +...... 99/100;

*/

#include<iostream>
using namespace std;
int main()
{
	int i;
	float sum=0;
	for( i=1; i<=99; i++)
	{	
		sum=sum+(i*1.0/(i+1));
	}
	
     cout<<" The sum is "<< sum;
	
return 0;
}
