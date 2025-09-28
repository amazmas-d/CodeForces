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
    long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        vector<long long>a(n);
        long long maximum=0;
        long long d=0;
        for(long long i=0; i<n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        for(long long i=0; i<n-1; i+=2)
        {
            d = abs(a[i+1] - a[i]);
            maximum = max(maximum,d);
        }
        cout << maximum << "\n";
    }
}
