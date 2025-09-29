#include<bits/stdc++.h>
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
        int n,m,x,y ;
        cin >> n >>m >>x >>y ;
        vector<int>arr1(n);
        vector<int>arr2(m);
        int countt = 0 ;
        for(int i = 0 ; i<n ; i++)
        {
            cin>>arr1[i];
            if(arr1[i]<=y)
            {
                countt++;
            }
        }
        for(int i = 0 ; i<m ; i++)
        {
            cin>>arr2[i];
            if(arr2[i]<=x)
            {
                countt++;
            }
        }
        cout<<countt<<endl;


    }
}
