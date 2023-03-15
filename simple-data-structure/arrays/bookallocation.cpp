#include <bits/stdc++.h>
using namespace std;
bool ispossiblesolution(int arr[], int students, int books, int mid)
{
    int studentcount = 1;
    int pagesum = 0;
    for (int i = 0; i < books; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            studentcount++;
            if (studentcount > students || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}
int bookallocation(int arr[], int students, int books)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < books; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (ispossiblesolution(arr, students, books, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int b = 4;
    int s = 2;
    int arr[4] = {10, 20, 30, 40};
    int final = bookallocation(arr, s, b);
    cout << "Minimum of maximum no. of pages allocated to a single student is " << final << endl;
}