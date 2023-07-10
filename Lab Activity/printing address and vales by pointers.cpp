#include <iostream>
using namespace std;
int main()
{

    int *ptrA, *ptrB;
    int a = 10, b = 20;
    ptrA = &a;
    ptrB = &b;
    cout << "\n\tAddress of a is : " << &a;
    cout << "\n\tAddress of b is : " << &b;
    cout<<"\n\n*****Values Through Pointers ***********\n";
    cout << "\n\tValue of a through ptrA : " << *ptrA;
    cout << "\n\tValue of b through ptrB : " << *ptrB;
cout<<"\n\n*****Addresses Through Pointers ***********\n";
    cout << "\n\tAddress of a through ptrA :: " << ptrA;
    cout << "\n\tAddress of b through ptrB :: " << ptrB;
}