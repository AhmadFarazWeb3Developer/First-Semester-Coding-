#include<iostream>
using namespace std;
struct Distance{
int feet;
float inches;
};
int main()
{
Distance d1={3, 6.50};
Distance d2={5, 6.45};
Distance* ptrStruct = new Distance;
ptrStruct = &d1;
cout << "\nfeet "<< ptrStruct->feet 
 <<"\'"<<" inches "<< ptrStruct->inches<<"\"";
ptrStruct = &d2;
cout << "\nfeet "<< ptrStruct->feet 
 <<"\'"<<" inches "<< ptrStruct->inches<<"\"";
return 0;
}