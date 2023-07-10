#include<iostream>
using namespace std;
int main()
{
	int students,fee,total ;
	cout<<"Enter number of students::";
	cin>>students;
	cout<<"\nEnter fee per student in pkr::";
	cin>>fee;
	total =students*fee;
	cout<<"\nTotal fee collected from students::";
     cout<<total;
     cout<<"\n";
     
     return 0;
}
