
/*making diamond of numbers ascendingly.just like 

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

range can be increased according to our desired;*/ 

#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=5; i++)
	
	{
		for(j=1;j<=i; j++)
		{
			cout<<" "<<j;
	}
	cout<<endl;
}
return 0;
}
