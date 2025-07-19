#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) ((void)0)
#endif // LOCAL
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int sum=0;
        int x,y,a;
        cin>>x>>y>>a;
        int remainder = a%(x+y);
        sum+=x;
        if(sum>(remainder+0.5)){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}
