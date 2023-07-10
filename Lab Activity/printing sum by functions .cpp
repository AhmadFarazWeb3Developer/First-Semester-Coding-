#include <iostream>
using namespace std;
void sum(int *a, int *b, int *c, int *d)
{

    cout << "\n\n\tSum of first two variables are : " << *a + *b;
    cout << "\n\n\tSum of last two varables are : " << *c + *d;
    cout << "\n\n\tDifference between them is : " << (*a + *b) - (*c + *d);
}
int main()
{
    int a, b, c, d;
    cout << "\n\tEnter first value : ";
    cin >> a;
    cout << "\n\tEnter Second value : ";
    cin >> b;
    cout << "\n\tEnter third value : ";
    cin >> c;
    cout << "\n\tEnter fourth value : ";
    cin >> d;

    sum(&a, &b, &c, &d);
}
