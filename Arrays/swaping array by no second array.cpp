// swaping two  arrays

#include<iostream>
using namespace std;
int main() {
	int first_array[8]= {1,2,3,4,5,6,7,8};
	int second_array[8]= {9,10,11,12,13,14,15,16};
	for(int i=0; i<=7; i++) {
		first_array[i]=first_array[i]+second_array[i];
		second_array[i]=first_array[i]-second_array[i];
		first_array[i]=first_array[i]-second_array[i];
		cout<<"\n\t"<<first_array[i];
	}
cout<<"\n\n\n\t";
	for(int i=0; i<=7;  i++) {
		cout<<"\n\t"<<second_array[i];
	}
cout<<"\n\n\tWah Wah";
	return 0;
}
