#include<iostream>
using namespace std;
int main()
{
	int value,min,max,j;
	cout<<"\tEnetr a value::";//this the first line of code 
	           //so the loop will br altrate for one less than mentioned
	cin>>value;// basically this value is for assingig the refernece to below altration;
	max=min=value;
	for(j=1;j<=5;j++)
	{
		cout<<"\n\tEnter a value::";
		cin>>value;
		if(value>max)
		max=value;
		if(value<min)
		min=value;
	}
	cout<<endl;
	cout<<"\n\t"<<max;
	cout<<"\n\t"<<min;
	return 0;
}
