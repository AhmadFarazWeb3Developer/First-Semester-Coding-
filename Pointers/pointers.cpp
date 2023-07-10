#include<iostream>
using namespace std;
 int main()
{
float  var=12.45;
cout<<"\n\n\tValue in var :: "<<var;
float  *pointer=&var;
cout<<"\n\n\tThis is address of var :: "<<pointer;
cout<<"\n\n\tthis is address of Pointer :: "<<&pointer;
cout<<"\n\n\tValue in Pointer  of var :: "<<*pointer;
return 0;
}