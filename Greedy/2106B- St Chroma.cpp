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
    cin>>t;
    while(t--)
    {
        long n, x;
        cin>>n>>x;
        for(size_t i = 0; i< n; i++)
        {
            if(i!= x)
            {
                cout<<i<<" ";
            }
        }
        if(x < n)
        {
            cout<<x;
        }
        cout<<endl;
    }

}
