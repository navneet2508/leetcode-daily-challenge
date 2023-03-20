#include <bits/stdc++.h>
using namespace std;
void print(int *p)
{
    cout << "Value of p is : " << p << endl;
    cout << "Value of *p is : " << *p << endl;
    cout << endl;
}
void update(int *p)
{
    // p = p + 1;
    // cout << "Inside Address of p after update is: " << p << endl;

    *p = *p + 1;
}
int main()
{
    int value = 6;
    int *p = &value;
    print(p);
    cout << "Address of p before update : " << p << endl;
    cout << "Value of p before update is: " << *p << endl;
    cout << endl;

    update(p);
    cout << "Address of p afte update : " << p << endl;
    cout << "Value of p after update is: " << *p << endl;
}