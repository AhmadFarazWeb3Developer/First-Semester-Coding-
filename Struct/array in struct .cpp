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
int main()
{
    string dummy = " ";
    const int Size = 5;
    Student stList[Size];
    for (int i = 0; i < Size; i++)
    {
        cout << "Enter Name: ";
        getline(cin, stList[i].Name);
        cout << "Enter RegNo: ";
        cin >> stList[i].regNo;
        cout << "Enter GPA: ";
        cin >> stList[i].GPA;
        getline(cin, dummy);
    }
    cout << "\nDisplaying Information." << endl;
    for (int i = 0; i < Size; i++)
    {
        cout << "\n Name : " << stList[i].Name << endl;
        cout << "\n RegNo# : " << stList[i].regNo << endl;
        cout << "\n GPA : " << stList[i].GPA << endl;
    }
    return 0;
}