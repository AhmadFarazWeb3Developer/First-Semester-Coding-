/*making diamond of numbers desendingly.just like 

5 4 3 2 1
5 4 3 2
5 4 3
5 4
5

range can be increased according to our desired;*/ 

#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=5; i++)
	
	{
		for(j=5;j>=i; j--)
		{
			cout<<" "<<j;
	}
	cout<<endl;
}
return 0;
}
