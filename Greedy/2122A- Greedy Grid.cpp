#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) ((void)0)
#endif // LOCAL
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (n == 1 || m == 1 || 1 > n > 100 || 1 > m > 100)
        {
            cout << "NO\n";
        }
        else if (n == 2 && m == 2)
        {
            cout << "NO\n";
        }
        else if (n == m)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}
