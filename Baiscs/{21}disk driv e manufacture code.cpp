/* This program is use to display the 
out put by using code.
here we use if else and break statement */

#include<iostream>
using namespace std;
int main()
{
	int code;
	cout<<"Read carefully the codes for Disk Drive Manufacturer\n";
	cout<<"\t1 is for Westren Digital\n";
	cout<<"\t2 is for 3M corporation\n";
	cout<<"\t3 is for Maxell corporatin\n";
	cout<<"\t4 is for Sony corporaton\n";
	cout<<"\t5 is for Verbation corporation\n";
	cout<<"\tEnter code for disk drive manufactrer::";
	cin>>code;
	if(code<1 || code>5)// The task wil be ended if , user 
	{                         //put wrong code.  
	cout<<"\n\tTry again\n";
	cout<<"\tRead the above instructions carefully\n";
	cout<<"\tEnter the valid code\n";
	}                    
	else{ 
	
	switch(code)
	{
		case 1:
			cout<<"\n\tWestren Digitat\n";
			break;
       case 2:
			   cout<<"\t3M corporation\n";
		   break;
		case 3:
			   cout<<"\tMaxell cororation\n";
			break;
		case 4:
				cout<<"\tSony corporation\n";
			break;
		case 5:
		        cout<<"\tVerbation coporation\n";
			break;			
				   
				}}
				return 0;
}
