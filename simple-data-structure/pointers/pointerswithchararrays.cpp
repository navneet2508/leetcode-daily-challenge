#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";
    cout << "Address of first block of integer array -> " << arr << endl;

    // It will give value of char array not address
    cout << "Address of first block of character array -> " << ch << endl;

    char *c = &ch[0];
    // It will print the entire string(value of char array)
    cout << "Value at *c is : " << c << endl;
}