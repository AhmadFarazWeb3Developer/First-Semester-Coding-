#include<iostream>
using namespace std;
int main() {
	int n,i, sum=0;
float median=0;
	int array[i],store_value[i];
	cout<<"\n\n\tEnter numbers for median :: ";
	cin>>n;
	if(n%2==0) {
		for(int i=0; i<n; i++) {
			cout<<"\n\n\tEnter "<<i+1<<" number :: ";
			cin>>array[i];
			store_value[i]=array[i];
		}
	} else {
		for (int i=0; i<n; i++) {
			cout<<"\n\n\tEnter "<<i+1<<" number :: ";
			cin>>array[i];
			store_value[i]=array[i];
		}
	}
	for(int i=0; i<n; i++) {
		cout<<"\n\n\tValue in store array "<<i+1<<" is :: "<<store_value[i];
		sum=sum+store_value[i];
	}
	median=float(sum/n);
	cout<<"\n\n\tMedian is :: "<<median;
}