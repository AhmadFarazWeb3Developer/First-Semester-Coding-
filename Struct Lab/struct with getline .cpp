#include<iostream>
#include<string>
using namespace std;
struct student {
	int sub;
	string name;
	int total;
};
int main() {
	student total_m;
	int n;
	cout<<"\n\n\tEnter number of student :  ";
	cin>>n;
	for (int i=0; i<n; i++) {
		cout<<"\n\n\tEnter name of the student : ";
		getline(cin>>ws,total_m.name);
	}

}