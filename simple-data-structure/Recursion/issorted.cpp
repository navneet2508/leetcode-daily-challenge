#include <bits/stdc++.h>
using namespace std;
bool isSorted(int *arr, int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    else
    {
        if (arr[0] > arr[1])
        {
            return false;
        }
        else
        {
            bool ans = isSorted(arr + 1, size - 1);
            return ans;
        }
    }
}
int main()
{
    int arr[5] = {1, 3, 4, 6, 7};
    int size = 5;
    bool ans = isSorted(arr, size);
    if (ans)
    {
        cout << "Array is sorted " << endl;
    }
    else
    {
        cout << "Array is not sorted " << endl;
    }
}