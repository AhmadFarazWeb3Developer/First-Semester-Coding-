
/* Finding the heighest marks by using array*/

#include<iostream>
using namespace std;
int main()
{
	int i,rno[i] ,marks[i];
	int max=0;  // memory space reserved 
	 
	for(i=0; i<5; i++)// alteration from 0 to 4 for roll no and marks assignment 
    {
		cout<<"\n\tRoll No of student::"<<i+1<<"::";
		cin>>rno[i];
		cout<<"\n\tMarks of student ::"<<i+1<<"::";
		cin>>marks[i];
	}
	for(i=1;i<5;i++)//alteration for marks checking 
{
if(marks[i]>marks[max])
max=i;
}
cout<<"\n\tThe roll no and heighest marks are::";
cout<<"\n\n\tRoll no::"<<rno[max];
cout<<"\n\n\tMarks  :: "<<marks[max];
return 0;
}


