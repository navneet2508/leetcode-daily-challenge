#include <bits/stdc++.h>
using namespace std;
int countPrimes(int n)
{
    int cnt = 0;
    vector<bool> prime(n + 1, true);

    prime[0] = prime[1] = false;

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            cnt++;

            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }
    return cnt;
}
int main()
{
    int num;
    cout << "Enter no. till u want to count prime numbers" << endl;
    cin >> num;
    int ans = countPrimes(num);
    cout << "The no. of prime numbers are-> " << ans << endl;
}