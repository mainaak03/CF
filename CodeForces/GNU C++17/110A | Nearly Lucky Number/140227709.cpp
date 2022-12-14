#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
inline void isLucky(ll n) {
    string s = to_string(n);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]!='7' && s[i]!='4') {cout <<"NO"; return;}
    }
    cout <<"YES";
    return;
}
 
inline int numLucky(ll n) {
    ll count=0;
    string s = to_string(n);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='7' || s[i]=='4') {count++;}
    }
    return count;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll num;
    cin >>num;
    isLucky(numLucky(num));
 
return 0;
}