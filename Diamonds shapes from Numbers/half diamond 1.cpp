
/*making diamond of numbers desendingly.just like 

1 1 1 1 1
2 2 2 2
3 3 3
4 4 
5

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
			cout<<" "<<i;
	}
	cout<<endl;
}
return 0;
}
