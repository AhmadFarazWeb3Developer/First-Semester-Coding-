
/* Here we are going to find number of 
grade holders , how mch hey are */

#include<iostream>
using namespace std;
int main()
{
	int i,marks[10],a,b,c,f;
	a=b=c=f=0;
	for(i=0; i<10; i++)
	{
		cout<<"\n\tEnter the marks of student  :: "<<i+1<<" :: ";
		cin>>marks[i];
	}
	for(i=1; i<=10; i++)
	{
		if(marks[i]>=80)
		{
			a++;
		}
		else if(marks[i]>=60 && marks[i]<80)
		{
			b++;
		}
		else if(marks[i]>=40 && marks[i]<59)
		{
			c++;
		}
		else if(marks[i]<40)
		{
			f++;
		}
	}
	cout<<"\n\n\n\tStudents having A grades/grade are/is :: "<<a;
	cout<<"\n\n\tStudents having B grades/grade are/is :: "<<b;
	cout<<"\n\n\tStudents having C grades/grade are/is :: "<<c;
    cout<<"\n\n\tStudents havind F grades/grade are/is :: "<<f;
    return 0;
}


