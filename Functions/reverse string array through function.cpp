#include<iostream>
using namespace std;
char reverseit(char arr[], int size);
int main() {
int size;
cout<<"\n\n\tEnter size of words :: ";
cin>>size;
char arr[size];
	cout<<"\n\n\tEnter the word or array of characters :: ";
	for(int i=0; i<size; i++) {
		cin>>arr[i];
	}
	cout<<"\n\n\tReversed word is here ::  ";
	reverseit(arr, size);
}
char reverseit(char arr[], int size ) {
while(size>=0) {
		cout<<arr[size]<<" ";
		size--;
	}
}