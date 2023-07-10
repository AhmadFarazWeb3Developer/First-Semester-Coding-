#include <iostream>
using namespace std;
int fibonacci(long long num)
{
    //base case 
    if (num == 0)
        return 0;
    // base case
    if (num == 1)
        return 1;
    // recursive case
    else
        return fibonacci(num - 1) + fibonacci(num - 2);
}
int main()
{

    long long  n;
    cout<<"\n\n\tEnter number : ";
    cin>>n;
    cout <<"\n\n\tFabonacci number : "<< fibonacci(n);
}