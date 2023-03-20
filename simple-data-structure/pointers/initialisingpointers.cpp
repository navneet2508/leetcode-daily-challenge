#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 12;
    int *a = &i;
    cout << "value of i is ->" << *a << endl;
    cout << "Address of i is ->" << a << endl;

    int *b = 0;
    b = &i;
    cout << "Value of i is ->" << *b << endl;
    cout << "Address of i is ->" << b << endl;

    int num = 5;
    int x = num;
    x++;
    // Value at num variable will not change
    cout << num << endl;

    int *p = &num;
    int y = *p;
    y++;
    // Value at num will not change as y is taking value at num not address of num
    cout << num << endl;

    int *ptr = &num;
    cout << *ptr << endl;
    (*ptr)++;
    // Value at num will CHANGE as *ptr is taking value at num not address of num
    cout << num << endl;
}