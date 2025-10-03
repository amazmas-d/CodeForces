#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) ((void)0)
#endif // LOCAL
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        ll sum=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        ll maxi=*max_element(a.begin(),a.end());
        ll mini=*min_element(a.begin(),a.end());
        int countt=0;
        for(int i=0; i<n; i++)
        {
            if(maxi==a[i])
                countt++;
        }
        if(maxi>mini+k+1||(maxi==mini+k+1 && countt>1))
        {
            cout<<"Jerry"<<endl;
            continue;
        }
        if(sum%2)
        {
            cout<<"Tom"<<endl;
        }
        else
            cout<<"Jerry"<<endl;


    }
    return 0;
}
