#include <iostream>
using namespace std;
int *ptr[3],n[]= {1,1,1}; //golbal variables decleration
void fun1(int arr[]) { //first function
	for (int i = 0; i < 3; i++) {
		n[i] = n[i] + arr[i];//incrementation
		ptr[i] = &n[i];//passing address
	}
}
void fun2() { //second function
	for (int i = 0; i < 3; i++) {
		cout << "\n\n\tValue Of " << i + 1 << "   Element  Is   : " << *ptr[i];
	}
}
int main() {
	int arr[3];
	for (int i = 0; i < 3; i++) {
		cout << "\n\tEnter Element  No : " << i + 1 << " : ";
		cin >> arr[i];//entering values
	}
	fun1(arr);//first function call
	cout << "\n*********Values After Increament **********";
	fun2();//second function call
}