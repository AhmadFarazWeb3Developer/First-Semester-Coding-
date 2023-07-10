#include<iostream>
using namespace std;
int main()
{
	int n,i,j,c;
	cout<<"Enter five number line by line  :: \n";
	int median[10];
	for(i=0; i<5; i++){
		cin>>median[i];
	}
	for(i=0;i<5;i++)
	{
		for(j=j+1; j <5; j++)
		{
			if(median[i]>median[j])
			{
				c=median[i];
				median[i]=median[j];
				median[j]=c;			
			}
		}
	}
cout<<"\nMedian :: "<<median[2];
	cout<<endl;
}