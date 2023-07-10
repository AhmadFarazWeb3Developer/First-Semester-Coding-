#include <iostream>
using namespace std;
int main()
{
    int n, count = 1;
    cout << "\n\n\tHow many integer do you want to enter :: ";
    cin >> n;
    int check = n;
    int arr1[n], arr2[n];
    cout << "\n\n\tEnter number indexwise :: ";
    for (int i = 0; i < n; i++)
    {
        cout << "\n\t";
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    { // coying one array in another
        arr2[i] = arr1[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == arr2[--n])
        { // matching starting indexs with last indexes
            count++;
        }
    }
    if (count == check)
    {
        cout << "\n\tPalindrom";
    }
    else
    {
        cout << "\n\tNot palindrom";
    }
}