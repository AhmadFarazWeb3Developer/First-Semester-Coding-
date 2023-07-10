#include<iostream>
using namespace std;
void printchar(int value);
int main() {
	int a;
	cout<<"\n\n\tEnter the rows of square :: ";
	cin>>a;
	printchar(a);
}
void printchar(int value) {
	char alphabet;
	cout<<"\n\n\tEnter character you want to print of sqaure :: ";
	cin>>alphabet;
	for(int i=0; i<value; i++) {
		cout<<"\t";
		for(int j=0; j<value; j++) {
			cout<<" "<<alphabet;
		}
		cout<<"\n";
	}

}