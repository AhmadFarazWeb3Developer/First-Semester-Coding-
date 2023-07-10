/*    Problem#1
Write a program that takes input of 4 subjects marks for 5 students each and display the sum and
average of each student(using 2D array)

#include<iostream>
using namespace std;
int main()
{
int sum=0;
int marks[5][4];
for(int i=0; i<5; i++)
{
for(int j=0; j<4; j++)
{
cout<<"\n\n\tEnter marks for "<<j+1<<" Subject :: ";
cin>>marks[i][j];
sum=sum+marks[i][j];
}
cout<<"\n\n\ttotal marks of "<<i+1<<" student marks :: "<<sum;
sum=0;
}
return 0;
}
*/
/*
Problem#2
Write a program that creates a two-dimensional array initialized with test data. Use any data type you wish. The program
should have the following functionality:
getTotal
getAverage
getRowTotal
getColumnTotal .
getHighestInRow.
getLowestInRow.
Demonstrate each of the functions in this program.*/

#include<iostream>
using namespace std;
int main() {
	int highest,lowest;
	int array[2][2];
	for(int i=0; i<2; i++) {
		for( int j=0; j<2; j++) {
			cout<<"\n\n\tEnter number :: ";
			cin>>array[i][j];
		}
	}
	highest=array[0][0];
	lowest=array[0][0];
	for(int i=0; i<2; i++) {
		for(int j=0; j<2; j++) {
			cout<<"\t"<<array[i][j];
			if(array[i][j]>highest) {
				highest=array[i][j];
			}
			if(array[i][j]<lowest) {
				lowest=array[i][j];
			}
		}
		cout<<"\n";
	}
	cout<<"\n\n\tHighest number is :: "<<highest;
	cout<<"\n\n\tLowest number is :: "<<lowest;
	return 0;

}