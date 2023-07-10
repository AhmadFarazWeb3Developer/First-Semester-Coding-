/* A very tremandous program for finding 
   total income of fruites and each and  
    every aspect of fruits */

#include<iostream>
using namespace std;
int main()
{
	int customer,i,mango[customer],orange[customer],banana[customer];
	int total=0;// memory allocaion .
	cout<<"\n\tEnter customers  ::  ";
	cin>>customer;
	for(i=0; i<customer; i++)
	{
		cout<<"\n\n\tcustumer no :: "<<i+1<<"  Fruites are below";
		cout<<"\n\tEnter mangoes   :: ";
			cin>>mango[i];
			cout<<"\n\tEnter Oranges   :: ";
			cin>>orange[i];
			cout<<"\n\tEnter bananas   :: ";
			cin>>banana[i];
	}
	cout<<"\n\n........................................................................."<<endl;
	cout<<"    cutomers       mangoes       oranges      bananas       total income"<<endl;
	for(i=0; i<customer; i++)
	{
		total=total+20*mango[i]+15*orange[i]+5*banana[i];//  here price is assigned to fruites
	
	cout<<"\n\t"<<1+i<<"           "<<mango[i]<<"              "<<orange[i]<<"             "<<banana[i]<<"                "<<total<<endl;
	cout<<"........................................................................."<<endl;
}
return 0;
}

