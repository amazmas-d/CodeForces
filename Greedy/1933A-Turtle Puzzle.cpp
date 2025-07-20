#include <bits/stdc++.h>
using namespace std;

const int MOD = (int)1e9 + 7;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long sum_of_abs = 0;
        for (int i = 0; i < n; ++i)
        {
            int a;
            cin >> a;
            sum_of_abs += abs(a);
        }
        cout << sum_of_abs << "\n";
    }
    return 0;
}

