#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "\n\tEnter size for array : ";
    cin>>size;
    int arr[size];
  int *ptr[size]; 
  cout<<endl;
    for (int i = 0; i < size; i++)
    {
    	 cout <<"\tEnter "<<i+1<<" Element Of Array : ";
        cin >> arr[i];//entering elements
        ptr[i]=&arr[i];//assigning address 
    }
    cout<<"\n******* Values through Pointers are *********\n";
    for (int i = 0; i < size; i++)
    {
         cout << "\n\tArray's "<<i+1 <<" Element is  :: "<<*ptr[i];//printing values by pointers
    }
    
}
