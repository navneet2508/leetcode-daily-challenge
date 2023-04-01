#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else
    {
        if (n == 2)
        {
            return 1;
        }
        else
        {
            int next = fibonacci(n - 1) + fibonacci(n - 2);
            return next;
        }
    }
}
int main()
{
    int n;
    cout << "Enter which place fibonacci no. u want to find" << endl;
    cin >> n;
    int ans = fibonacci(n);
    cout << "Answer is : " << ans << endl;
}