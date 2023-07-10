
#include <iostream>
using namespace std;
int main()
{

    int *ptrA, *ptrB;
    int a = 10, b = 20;
     ptrA = &a;
    ptrB = &b;
    cout << "\n\tAddress of a :: " << &a;
    cout << "\n\tAddress of b :: " << &b;
    cout << "\n\tValue of a :: " << *ptrA;
    cout << "\n\tValue of b :: " << *ptrB;
    cout << "\n\tAddress of a through ptrA :: " << ptrA;
    cout << "\n\tAddress of b through ptrB :: " << ptrB;
}