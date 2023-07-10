/* This program is about the display the 
salary of senior and junior but it helps
to learn the use of if-else if control structure 
use.*/ 

#include<iostream>
using namespace std;
int main()
{
	char status;
	int senior=400,junior=270;
	cout<<"Enter J/j for junior salary"<<endl;
	cout<<"\tOR"<<endl;
	cout<<"Enter S/s for senior salary"<<endl;
	cout<<"Enter status for checking"<<endl;
	cin>>status;
	if(status=='S'|| status=='s')
	{ 
	cout<<"Senior salalry is:: "<<senior<<"pkr"<<endl;
		}
else if(status=='J'||status=='j')
{
	cout<<"Junior salary is::"<<junior<<"pkr"<<endl;
	}	
	else
	{
		cout<<"please select J/j or S/s"<<endl;
		cout<<"Try again";
		
	}
return 0;
}
