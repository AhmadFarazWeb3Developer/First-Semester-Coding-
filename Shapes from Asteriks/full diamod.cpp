
#include<iostream>
using namespace std;
int main() {
int r;
	cout<<"\n\n\tEnter number of rows :: ";
	cin>>r;  // r is for  no of spaces before starik.
	for(int i=1; i<=r; i++) { //the main loop for stariks is  started from here.
		for(int j=1; j<=r-i; j++) { // this loop is for making spaces
			cout<<" ";
		}
		for(int k=1; k<=(2*i)-1; k++) { //this loop for printing stariks
			cout<<"*";
		}
		cout<<endl;      //end of half of diamond
	}
	for(int i=r-1; i>=1; i--) { // now another half is started from here,with  number of zero spaces
		for(int j=1; j<=r-i; j++) { //in first loop no space is printed.
			cout<<" ";
		}
		for(int k=1; k<=2*i-1; k++) { // printing stariks.
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
