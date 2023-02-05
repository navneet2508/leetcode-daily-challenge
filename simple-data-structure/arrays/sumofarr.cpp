#include <bits/stdc++.h>
using namespace std;
void sumofarr(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }
    cout << "Sum of all elements of Array is " << sum << endl;
}
int main()
{
    int arr[5] = {12, -8, 9, -3, 0};
    sumofarr(arr, 5);
}