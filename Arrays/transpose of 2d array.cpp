// transpose of a matix 
#include<iostream>
using namespace std;
int main()
{
int i,j;
int array[2][3]={{1,2,3},{4,5,6}};

for(i=0; i<2; i++)
{
for(j=0; j<3; j++)
{
cout<<array[i][j];
cout<<" ";
}
cout<<"\n\n";
}
cout<<"\n\n\Now tranpose of array is \n\n";
for(i=0; i<3; i++)
{
for(j=0; j<2; j++)
{
cout<<array[j][i];
cout<<" ";
}
cout<<"\n\n";
}


return 0;
}