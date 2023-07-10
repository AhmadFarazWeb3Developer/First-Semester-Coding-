#include <iostream>
using namespace std;
int main()
{
    int arr[5], *max;
    cout << "\n******* Enter Array Elements ****** \n";
    for (int i = 0; i < 5; i++)
    {
        cout << "\n\tEnter Element no : " << i + 1 << " : ";
        cin >> arr[i];
    }
    *max = arr[0];//setting first index value to maximum
    for (int i = 0; i < 5; i++)
    {
        if (*max < arr[i])//condition checking the values on each index wih max
        {
            *max = arr[i];
        }
    }
    cout << "\n\tMaximum number is : " << *max;
}