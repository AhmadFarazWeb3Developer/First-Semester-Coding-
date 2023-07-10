
/* if you dont get/understand this program 
then you can also check the program no {34}*/

#include<iostream>
using namespace std;
int main()
{
	int i,a[10],largest,smallest;
	cout<<"\tEnter digit 1 ::";// here we assme that a[0] is the smallest
	cin>>a[0];                 // it will be cosidedr as number which we in for checking;
largest=smallest=a[0];// let us considerd that a[0] is the largest and smallest;
for(i=1; i<10; i++)//here the loop is stared from a[1]cause a[0] is enterd before altration and also the part f this alteretion
{
	cout<<"\n\tEnter digit "<<i+1<<" ::";
    cin>>a[i];
}
	for(i=1;i<=10;i++) 
	{
	if(smallest>a[i])
	smallest=a[i];
	}
	for(i=1; i<=10; i++)
	{
		if(largest<a[i])
		largest=a[i];
	}
cout<<"\n\tThe smallest number is::"<<smallest;
cout<<"\n\tThe largest number is::"<<largest;
}

