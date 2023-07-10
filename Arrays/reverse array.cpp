#include<iostream>
using namespace std;
 int main(){
//Initialize array   
int arr[5] = {1, 2, 3, 4, 5};   
cout<<"Original array\n";  
for (int i=0; i<5; i++)
{ 
    cout<<" "<<arr[i];
}   
cout<<"\nArray in reverse order: \n";  
//Loop through the array in reverse order  
for (int i=5-1; i>=0; i--){
    cout<<" "<<arr[i];
}
return 0;
}