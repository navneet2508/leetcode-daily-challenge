#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 5;
    int *p = &num;
    cout << "Number is " << num << endl;

    // *p will print the value
    cout << "Value pointed by *p is " << *p << endl;
    // p will print the address of the value
    cout << "Address pointed by p is " << p << endl;
    num++;
    cout << "Value pointed by *p after increment in num is " << *p << endl;
    cout << "Address of num after increment is " << p << endl;

    double d = 4.2;
    // Pointer type is same as of variable type
    double *ptr = &d;

    // As variable name denotes different variables and pointer denotes their address.
    // The size of different variables may differ but size of pointer will be same
    cout << "Size of num variable is " << sizeof(num) << endl;
    cout << "Size of pointer of num variable(int type) is " << sizeof(p) << endl;
    cout << "Size of d variable is " << sizeof(d) << endl;
    cout << "Size of pointer of d variable(double type) is " << sizeof(ptr) << endl;
}