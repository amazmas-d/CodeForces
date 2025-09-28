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
        int x,n,sum=0;
        cin>>x>>n;
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                sum=sum-x;
            }
            else
            {
                sum=sum+x;
            }
        }
        cout<<sum<<endl;
    }
}
