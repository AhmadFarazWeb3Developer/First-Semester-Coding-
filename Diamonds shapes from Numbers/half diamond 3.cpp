
/*making diamond of numbers ascendingly.just like 
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

range can be icreased according to our desired;*/ 

#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=5; i++)
	{
		for(j=1;j<=i; j++)
			{
				cout<<" "<<i;
		}
			cout<<endl;
			}
			return 0;
}
