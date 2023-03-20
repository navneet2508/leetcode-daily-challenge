#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 5;
    int *ptr = &num;
    cout << *ptr << endl;

    // Copying a pointer
    int *pointer = ptr;
    cout << "Address at pointer before -> " << ptr << " ";
    cout << "Address at pointer after -> " << pointer << endl;
    cout << "Value at pointer before -> " << *ptr << " ";
    cout << "Value at pointer after -> " << *pointer << endl;

    // Pointer Arithmetic
    int x1 = 5;
    int *ptr1 = &x1;
    *ptr1 = *ptr1 + 1;
    cout << "Value at pointer *ptr1 is-> " << *ptr1 << endl;

    cout << "Address at ptr1 before ->" << ptr1 << endl;
    ptr1 = ptr1 + 1;
    cout << "Address at ptr1 after  ->" << ptr1 << endl;
}