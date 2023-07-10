/*Write a function called reversit() that reverses a C-string (an array of characters). Use a for loop
that swaps the first and last characters, then the second and next-to-last characters, and so on.
The string should be passed to reversit() as an argument.[4]*/
#include<iostream>
void reversit(char arr[],int size);//function decleration
using namespace std;
int main() {
	int size;
	cout<<"\n\n\tEnter size of array :: ";
	cin>>size;
	char arr [size];//character array
	cout<<"\n\t";
	for(int i=0; i<size; i++) { //loop for input characters
		cin>>arr[i];
	}
	cout<<"\n";
	reversit(arr,size);//function call
}
void reversit(char arr[], int size) {
	int n=size;//local variable
	for(int i=0; i<=size; i++) { //loop for swaping characters
		char start=arr[i];
		char end=arr[n--];
		char temp=start;
		start=end;
		end=temp;
		cout<<"  "<<start;
	}

}
