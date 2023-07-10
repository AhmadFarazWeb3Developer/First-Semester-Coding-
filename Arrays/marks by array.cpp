#include<iostream>
using namespace std;
int main()
{
int limit;
int marks[limit];
cout<<"\n\n\tHow many students do you want to check :: ";
cin>>limit;
for(int i=1; i<=limit; i++)
{
cout<<"\n\n\tEnter marks no :: "<<i<<" :: ";
cin>>marks[i];
float percentage = (marks[i]/1100.0)*100;
cout<<"\n\n\t Percantage of "<<marks[i]<<" :: "<<percentage<<"%";
}
return 0;
}