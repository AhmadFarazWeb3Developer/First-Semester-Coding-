#include <iostream>
#include <string>
using namespace std;
struct Faraz
{
    string city, father, university, department,current_location;
    int age, GPA;
} faraz;
struct Zafar
{
    string city, father, collage, course,current_location;
    int Age, marks;
} zafar;
int main()
{
    faraz = {"Swabi", "Muhammad Fayyaz", "AU-AACK-PAKISTAN", "BSCS-FALL 2021","Attock", 23, 4};
    zafar = {"Swabi", "Muhammad Fayyaz", "GHAZI-INSTITUE OF TECHNNOLOGY", "CIVIL-DAE","Swabi", 20, 1130};
    cout << "\n*******************    FARAZ INFORMATION  ******************\n\n";
    cout << "Name of the City : " << faraz.city << endl;
    cout << "Name of the Father : " << faraz.father << endl;
    cout << "Name of the University : " << faraz.university << endl;
    cout << "Name of the Department : " << faraz.department << endl;
    cout<<"Current Location : "<<faraz.current_location<<endl;
    cout << "Age of Faraz : " << faraz.age << endl;
    cout << "GPA of the Faraz : " << faraz.GPA << endl;
    zafar.current_location ="Behria Town Rawalpindi";
    cout << "\n*******************    ZAFAR INFORMATION  ******************\n\n";
    cout << "Name of the City : " << zafar.city << endl;
    cout << "Name of the Father : " << zafar.father << endl;
    cout << "Name of the University : " << zafar.collage << endl;
    cout << "Name of the Department : " << zafar.course << endl;
    cout<<"Current Location : "<<zafar.current_location<<endl;
    cout << "Age of Faraz : " << zafar.Age << endl;
    cout << "GPA of the Faraz : " << zafar.marks;
    return 0;
}