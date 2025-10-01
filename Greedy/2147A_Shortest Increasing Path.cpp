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
        long long x,y;
        cin>>x>>y;
       if(x==y || x==y+1 || y==1)
        {
            cout<<"-1\n";
        }
        else if(y>x)
        {
            cout<<"2\n";
        }
        else
        {
            cout<<"3\n";
        }
    }
}
