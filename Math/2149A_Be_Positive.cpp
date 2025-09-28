#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) (void(0))
#endif // LOCAL

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0;
        cin>>n;
        int prod=1;
        int pos=0,neg=0,zer=0;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            prod=prod*arr[i];
            if(arr[i]<0)
            {
                neg++;
            }
            else if(arr[i]>0)
            {
                pos++;
            }
            else
            {
                zer++;
            }
        }
        for(int i=0;i<zer;i++)
       {
           ans++;
       }
       if(neg%2!=0)
       {
           ans=ans+2;
       }
       cout<<ans<<endl;
    }
}
