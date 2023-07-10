
#include <iostream>

using namespace std;

int main() {
	int A[2][2];
	int Min, Max;
	for(int i=0; i<2; i++) {
		for(int j=0; j<2; j++) {
			cout<<"\n\n\tEnter a value :: ";
			cin>>A[i][j];
		}
	}
	Max = A[0][0];
	Min = A[0][0];
	cout<<"\n";
	for(int i=0 ; i<2; i++) {
		for(int j=0; j<2; j++) {
			cout<<A[i][j]<<" ";
			if (A[i][j] > Max) {
				Max = A[i][j];
			}
			if (A[i][j] < Min) {
				Min = A[i][j];
			}
		}
	}

	cout<<"Max: "<<Max<<endl;
	cout<<"Min: "<<Min<<endl;
	return 0;
}