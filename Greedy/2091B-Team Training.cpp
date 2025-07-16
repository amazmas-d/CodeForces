
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, s, count = 0, team = 0;
        cin >> n >> s;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());

        for (int i = 0; i < n; i++)
        {
            count++;
            if (count * a[i] >= s)
            {
                team++;
                count = 0;
            }
        }
        cout<<team<<endl;
    }
}
