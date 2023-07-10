#include<iostream>
using namespace std;
int main()
{
int i,j;
int var1=6;
int sum=0;
int array[10]={1,2,3,4,5,6,7,8,9,10};
for(i=0; i<10; i++)
{
cout<<array[i];
cout<<"\n";
sum=sum+array[i];
}
cout<<sum;
cout<<"\n\n\n";
var1=++var1/6;
cout<<var1;
}