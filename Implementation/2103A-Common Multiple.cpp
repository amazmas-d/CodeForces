#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n, ans = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<int> b(n + 1, 0);
    for(int i = 0; i < n; ++i) {
        b[a[i]]++;
    }

    for(int i = 0; i < b.size(); ++i) {
        if(b[i] > 0) {
            ans++;
        }
    }
    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
