#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i=1; i<n; i++) {
            v[i]=i;
        }
        v[0]=n;
        for (auto i:v) {
            cout<<i <<" ";
        }
        cout<<"\n";
    }
    return 0;
}