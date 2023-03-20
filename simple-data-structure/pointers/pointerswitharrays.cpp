#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {2, 5, 7, 11};
    cout << "Address of first memory block is : " << arr << endl;
    cout << "Element in first memory block is : " << arr[0] << endl;
    cout << "Address of first memory block is : " << &arr[0] << endl;
    cout << endl;

    cout << "*arr will print :" << *arr << endl;
    cout << "*arr+1 wil print :" << *arr + 1 << endl;
    cout << "*(arr+1) will print :" << *(arr + 1) << endl;
    cout << "*(arr)+1 will print :" << *(arr) + 1 << endl;
    cout << endl;

    // arr[i] =  *(arr+i)
    // i[arr] = *(i+arr)              <------VERY IMPORTANT NOTE
    cout << "Value at index 2 : " << arr[2] << endl;
    cout << "Value at index 2 : " << *(arr + 2) << endl;

    // These will also give same output
    cout << "Value at index 2 : " << *(2 + arr) << endl;
    cout << "Value at index 2 : " << 2 [arr] << endl;
    cout << endl;

    int *ptr = &arr[0];
    // Size of array
    cout << "Size of arr is : " << sizeof(arr) << endl;
    cout << "Size of *arr is : " << sizeof(*arr) << endl;
    cout << "Size of &arr is : " << sizeof(&arr) << endl;
    cout << endl;

    // Size of pointer
    cout << "Size of ptr is : " << sizeof(ptr) << endl;
    cout << "Size of *ptr is : " << sizeof(*ptr) << endl;
    cout << "Size of &ptr is : " << sizeof(&ptr) << endl;

    // Value at different operation on arrays
    cout << "arr is : " << arr << endl;
    cout << "*arr is : " << *arr << endl;
    cout << "&arr is : " << &arr << endl;
    cout << endl;

    // Value at different operation on pointers
    cout << " ptr is : " << ptr << endl;
    cout << " *ptr is : " << *ptr << endl;
    cout << " &ptr is : " << &ptr << endl;
}