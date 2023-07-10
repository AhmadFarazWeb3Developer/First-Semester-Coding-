#include<iostream>
using namespace std;
int main () {
	int n, i,j, max, min;
int arr[i][j];
	cout << "Enter the size of the array : ";
	cin >> n;
	cout << "Enter the elements of the array : ";
	for (i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			cout<<"\n\n\tEnter a number :: ";
			cin >> arr[i][j];
		}
	}
	max = arr[0][0];
	for (i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			if (max < arr[i][j])
				max = arr[i][j];
		}
	}
	min = arr[0][0];
	for (i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			if (min > arr[i][j])
				min = arr[i][j];
		}
	}
	cout << "\n\n\tLargest element : " << max;
	cout << "\n\n\tSmallest element : " << min;
	return 0;
}