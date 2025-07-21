#include <bits/stdc++.h>
using namespace std;
int main() {

    int r,c;
    cin>>r>>c;

    string s;
    int f=1;
    char z;
    for(int i=0;i<r;i++) {
        cin>>s;

        if (i>0) {
            if (z==s[0])
                f=0;
        }
        for(int j=0;j<c-1;j++) {
            if (s[j]!=s[j+1]) {
                f=0;
            }
        }

        z=s[0];
    }
    if (f==1)
        cout<<"YES";
    else
        cout<<"NO";
}
