#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, len;
    string s, r;
    cin >>t;
    while (t--) {
        cin >>s;
        len = s.length();
        if (len%2!=0) {cout <<"NO" <<endl;}
        else {
            r = s.substr(len/2, len/2);
            s = s.substr(0, len/2);
            if (r==s) {cout <<"YES" <<endl;}
            else {cout <<"NO" <<endl;}
        }
    }
return 0;
}