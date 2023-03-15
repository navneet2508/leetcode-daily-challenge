#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> &boards, int k, int size, int mid)
{
    int lengthsum = 0;
    int paintercount = 1;
    for (int i = 0; i < size; i++)
    {
        if (lengthsum + boards[i] <= mid)
        {
            lengthsum += boards[i];
        }
        else
        {
            paintercount++;
            if (paintercount > k || boards[i] > mid)
            {
                return false;
            }
            lengthsum = 0;
            lengthsum += boards[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int s = 0;
    int sum = 0;
    int ans = 0;
    int size = boards.size();
    for (int i = 0; i < size; i++)
    {
        sum += boards[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(boards, k, size, mid))
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
    vector<int> boards;
    boards.push_back(5);
    boards.push_back(5);
    boards.push_back(5);
    boards.push_back(5);
    int k = 2;
    int ans = findLargestMinDistance(boards, k);
    cout << ans << endl;
}