#include<iostream>
using namespace std;
int main() {
	int mat1[2][2], mat2[2][2], i, j, mat3[2][2];
	cout<<"Enter Elements of First Matrix: \n";
	for(i=0; i<2; i++) {
		for(j=0; j<2; j++) {
			cout<<"\t";
			cin>>mat1[i][j];
		}
	}
	cout<<"\n\n\t"<<mat1[0][0]<<" "<<mat1[0][1];
	cout<<"\n\t"<<mat1[1][0]<<" "<<mat1[1][1];
	cout<<"\n\nEnter Elements of Second Matrix: \n\n";
	for(i=0; i<2; i++) {
		for(j=0; j<2; j++) {
			cout<<"\t";
			cin>>mat2[i][j];
		}
	}
	cout<<"\n\n\t"<<mat2[0][0]<<"\t"<<mat2[0][1];
	cout<<"\n\t"<<mat2[1][0]<<"\t"<<mat2[1][1];
	cout<<"\nAdding the Two Given Matrix...\n";
	for(i=0; i<2; i++) {
		for(j=0; j<2; j++) {
			mat3[i][j] = mat1[i][j]+mat2[i][j];
		}
	}
	cout<<"Addition Result of Two Given Matrix is:\n";
	for(i=0; i<2; i++) {
		for(j=0; j<2; j++)
			cout<<mat3[i][j]<<"\t";
		cout<<endl;
	}
	return 0;
}