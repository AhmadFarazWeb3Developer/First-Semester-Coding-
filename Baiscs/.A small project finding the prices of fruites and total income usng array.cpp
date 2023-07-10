/* A very tremandous program for finding 
   total income of fruites and details  of
    fruits         */

#include<iostream>
using namespace std;
int main()
{
	int customer,i,mango[customer],orange[customer],banana[customer];
	int total=0;     // memory allocaion .
	cout<<"\n\t...........................";
	cout<<"\n\t:  Welcom to fruit shop   :";
    cout<<"\n\t...........................";
    cout<<"\n\n\tBanana price per piece = 5/- pkr";
	cout<<"\n\n\tApple price per piece = 20/- pkr";
	cout<<"\n\n\tOrange price per piece = 15/- pkr";
	cout<<"\n\n\tEnter  the customers  ::  ";
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
	cout<<"\n\t"<<1+i<<"           "<<mango[i]<<"              "<<orange[i]<<"             "<<banana[i]<<"             "<<total<<endl;
	cout<<"........................................................................."<<endl;
}
return 0;
}

