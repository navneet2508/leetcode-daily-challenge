#include <bits/stdc++.h>
using namespace std;
void reversearray(int arr[], int size)
{
    for (int i = 0; i < (size + 1) / 2; i++)
    {
        swap(arr[i], arr[size - i - 1]);
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }
}
int main()
{
    int arr[6] = {1, 6, 3, 8, 5, 89};
    reversearray(arr, 6);
}