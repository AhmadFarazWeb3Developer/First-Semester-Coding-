#include <iostream>
#include<string>
using namespace std;
char fun(char word)
{
        char array=toupper(word);
        return array;
}
int main()
{
    string name;
    char array[100];
    char ch;
    cout << "\n\n\tEnter name : ";
     getline(cin>>ws,name);
    for (int  i = 0; i < name.length(); i++)
    {
ch=name[i];
        array[i]=fun(ch); 
        }
    for (int i = 0; i <name.length(); i++)
    {
        cout<<array[i];
    }
}