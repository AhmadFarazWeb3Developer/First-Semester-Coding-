// String Example2
#include <iostream>
#include <string>
using namespace std;
struct Student
{
    int regNo;
    string Name;
    double GPA;
};
void Displaydata(Student);
int main()

{
    Student st1 = {1234, "Majid Ali", 3.45};
    Student st2, st3;
    st2 = st1;
    cout << "Enter Full Name of student : ";
    getline(cin, st3.Name);
    cout << "Enter student RegNo : ";
    cin >> st3.regNo;
    cout << "Enter student GPA of student : ";
    cin >> st3.GPA;
    cout << "\nStudent No.1 data " << endl;
    Displaydata(st1);
    cout << "\nStudent No.2 data " << endl;
    Displaydata(st2);
    cout << "\nStudent No.3 data " << endl;
    Displaydata(st3);
    return 0;
}
void Displaydata(Student stud)
{
    cout << "Name : " << stud.Name << endl;
    cout << "RegNo# : " << stud.regNo << endl;
    cout << "GPA : " << stud.GPA << endl;
}