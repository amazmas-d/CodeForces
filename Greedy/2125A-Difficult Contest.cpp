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
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        deque<char>result;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='T')
            {
                result.push_front(s[i]);
            }
            else
            {
                result.push_back(s[i]);
            }
        }
        for(int i=0; i<result.size(); i++)
        {
            cout<<result[i];
        }
        cout<<endl;
    }



}







