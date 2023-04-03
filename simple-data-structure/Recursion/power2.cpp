#include <bits/stdc++.h>
using namespace std;
int power(int num, int pow)
{
    if (pow == 0)
        return 1;

    if (pow == 1)
        return num;

    int ans = power(num, pow / 2);

    if (pow % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return num * ans * ans;
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