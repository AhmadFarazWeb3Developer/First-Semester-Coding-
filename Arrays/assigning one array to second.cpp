//swaping two arrays by using third array
#include<iostream>
using namespace std;
int main()
{
	int firstArray[4]= {1,2,3,4};
	int secondArray[4]= {5,6,7,8};
	int thirdArray[4];
	for(int i=0; i<=3; i++) {
		thirdArray[i]=firstArray[i];
		firstArray[i]=secondArray[i];
		cout<<"\n\n\t"<<firstArray[i];
	}
	for(int i=0; i<=3; i++) {
		secondArray[i]=thirdArray[i];
		cout<<"\n\n\t"<<secondArray[i];
	}
	return 0;
}