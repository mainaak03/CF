#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,x,tr=0;
        cin>>n>>x;
        vector<int> v(2*n),v1,v2;
        for (auto &i:v) cin>>i;
        sort(v.begin(), v.end());
        for (int i=0; i<2*n; i++) {
            if (i<n) v1.push_back(v[i]);
            else v2.push_back(v[i]);
        }
        for (int i=0; i<n; i++) {
            if (v2[i]-v1[i]<x) {
                cout<<"NO\n";
                tr=1;
                break;
            }
        }
        if (!tr) cout<<"YES\n";
    }
    return 0;
}