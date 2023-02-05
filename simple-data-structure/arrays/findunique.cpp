#include <bits/stdc++.h>
using namespace std;
int findUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[7] = {2, 3, 1, 2, 4, 3, 4};
    int answer = findUnique(arr, 7);
    cout << answer << endl;
}
