#include <bits/stdc++.h>
using namespace std;
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #define int long long int
    int tc;
    cin >>tc;
    while (tc--) {
        int n;
        cin >>n;
        vector <int> v(n);
        for (auto &i:v) {
            cin >>i;
        }
        int l=0, r=0;
        for (int i=0; i<n; i++) {
            if (v[i]!=i+1) {
                l=i;
                break;
            }
        }
        for (int i=l+1; i<n; i++) {
            if (v[i]==l+1) {
                r=i;
                break;
            }
        }
        reverse(v.begin()+l, v.begin()+r+1);
        for (auto i:v) {
            cout <<i <<" ";
        }
        cout <<"\n";
    }
 
return 0;
}