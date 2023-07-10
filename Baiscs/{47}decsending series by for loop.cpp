/*  This program will diplay

64 32 16 8 4 2

*/

#include<iostream>
using namespace std;
int main()
{
	int i;
	int n=64;
	for(i=1; i<=6; i++)
	{
		cout<<n<<" ";
	   n=n/2;
	}
	return 0;
}
