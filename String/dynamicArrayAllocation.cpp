
#include <iostream>
using namespace std;
int *allocates(int num); // function declerattion
int main()
{
    int number = 0;
    cout << "\n\tEnter in array size :: ";
    cin >> number;
    int *Array;
    Array = allocates(number);
    cout << "\n\tValues After Dynamic Allocation\n\n";
    for (int i = 0; i < number; i++)
    {
        cout << "\n\tNumber " << i + 1 << " is " << Array[i];
    }
}
int *allocates(int num)
{
    int *Array = new int[num]; // dynamic memory allocation
    for (int i = 0; i < num; i++)
    {
        cout << "\tEnter number " << i + 1 << " : ";
        cin >> Array[i]; // entering each value
    }
    return Array;
}