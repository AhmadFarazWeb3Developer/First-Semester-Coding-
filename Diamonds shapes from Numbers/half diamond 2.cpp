/*making diamond of numbers desendingly.just like 

1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1

range can be increased according to our desired;*/ 

#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=5; i++)
	
	{
		for(j=1; j<=6-i; j++)
		{
			cout<<" "<<j;
	}
	cout<<endl;
}
return 0;
}
