#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << "Printing p -> " << p << endl;
    cout << "Printing *p -> " << *p << endl;
    cout << "Printing &p -> " << &p << endl;
    cout << endl;

    cout << "Printing i -> " << i << endl;
    cout << "Printing *p -> " << *p << endl;
    cout << "Printing **p2 -> " << **p2 << endl;
    cout << endl;

    cout << "Printing &i  -> " << &i << endl;
    cout << "Printing p   -> " << p << endl;
    cout << "Printing *p2 -> " << *p2 << endl;
    cout << endl;

    cout << "Printing &p   -> " << &p << endl;
    cout << "Printing p2   -> " << p2 << endl;
}