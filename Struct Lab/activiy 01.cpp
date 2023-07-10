#include <iostream> 
#include <string>
using namespace std; 
struct Student 
{ 
	int rollno; 
	string name; 
	float marks[3]; 
}; 
void display(Student s) 
{ 
	cout<<"\nRoll Number : "<<s.rollno; 
	cout<<"\nName : "<<s.name; 
	cout<<"\nMarks in 3 subjects : "; 
	for (int i = 0; i < 3; i++) 
		cout << s.marks[i] << " "; 
	cout << "\n"; 
} 
int main() 
{ 
	Student s[3]; 
	for (int i = 0; i < 3; i++) 
	{ 
		s[i].rollno = i + 1; 
		cout<<"Enter name of student "<<i+1<<" : "; 
		cin>>s[i].name; 
		cout<< "Enter marks of student "<<i+1<<" : "; 
		for (int j = 0; j < 3; j++) 
			cin >> s[i].marks[j]; 
	} 
	cout<< "\n\nDetails of students are : \n"; 
	for (int i = 0; i < 3; i++) 
		display(s[i]); 
	return 0; 
}