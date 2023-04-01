#include <bits/stdc++.h>
using namespace std;
int power(int num, int pow)
{
    if (pow == 0)
    {
        return 1;
    }
    else
    {
        int smallerproblem = power(num, pow - 1);
        int biggerproblem = num * smallerproblem;
        return biggerproblem;
    }
}
int main()
{
    int n;
    cout << "Enter no. whose power u want to find" << endl;
    cin >> n;
    int pow;
    cout << "Power u want to find" << endl;
    cin >> pow;
    int ans = power(n, pow);
    cout << "Answer is : " << ans << endl;
}