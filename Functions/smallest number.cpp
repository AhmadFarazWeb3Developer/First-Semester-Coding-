#include<iostream>
using namespace std;
int smallest(int arr[], int size);
int main() {
	int i,size;
	cout<<"\n\n\tHow many digits you want to enter :: ";
	cin>>size;
	int arr[size];
	cout<<"\n\n\tEnter three integers :: ";
	for (int i=0; i<size; i++) {
		cout<<"\n\n\t";
		cin>>arr[i];
	}
	cout<<"\n\n\tSmallest number is :: "<<smallest(arr, size);
	return 0;
}
int smallest(int arr[], int size) {
	int small[size];
	for(int i=0; i<size; i++) {
		small[i]=arr[i];
	}
	if(small[0]<small[1]&&small[0]<small[2])
		return small[0];
	else if(small[1]<small[2]&&small[1]<small[0])
		return small[1];
	else if(small[2]<small[0]&&small[2]<small[1])
		return  small[2];
}