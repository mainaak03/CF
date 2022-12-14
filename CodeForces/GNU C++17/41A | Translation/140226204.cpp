#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s, t, temp;
    cin >>s >>t;
    for (int i=s.length()-1; i>=0; i--) {
        temp+=s[i];
    }
    if (temp==t) {cout <<"YES" <<endl;}
    else {cout <<"NO" <<endl;}
 
return 0;
}