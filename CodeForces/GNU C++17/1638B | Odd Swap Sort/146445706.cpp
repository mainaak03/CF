#include <bits/stdc++.h>
using namespace std;
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #define int long long int
 
    int tc;
    cin>>tc;
    while (tc--) {
        int n;
        cin >>n;
        vector <int> v(n), o, e;
        for (auto &i:v) {
            cin >>i;
            if (i%2==0) {
                o.push_back(i);
            }
            else {
                e.push_back(i);
            }
        }
        if (is_sorted(e.begin(), e.end())!=1 or is_sorted(o.begin(), o.end())!=1) {
            cout <<"NO\n"; 
        }
        else {
            cout <<"YES\n";
        }
    }
return 0;
}