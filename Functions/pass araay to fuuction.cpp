#include<iostream>
#include<cctype>
using namespace std;

char lowertoupper(char arr[], int size);
int main()
{
int size;
cout<<"\n\n\tEnter size of name  :: ";
cin>>size;
char arr[size];
cout<<"\n\n\tEnter the name :: ";
for(int i=0; i<size; i++)
{
cin>>arr[i];
}
cout<<"\n\n\tConverted to upper case :: "<<lowertoupper(arr,size);
}
char lowertoupper(char arr[], int size)
{
char z,s;
for(int i=0; i<size; i++)
{
z=arr[i];
s= toupper(z);
cout<<s;
}
}