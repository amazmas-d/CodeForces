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
    cin>>t;
    while(t--)
    {
        int n,k,count=0,p=0;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                count++;
            }
            else if(a[i]==1)
            {
                count=0;
            }
            if(count==k)
            {
                p++;
                count=-1;
            }
        }
        cout<<p<<endl;
    }
}
