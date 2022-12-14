#include <bits/stdc++.h>
using namespace std;
 
int solve (vector <int> v, int n) {
    vector <int> m;
    sort(v.begin(), v.end());
    m.push_back(v.front());
    for (int i = 0; i < n-1; i++)
    {
        m.push_back(v[i+1]-v[i]);
    }
    sort(m.begin(), m.end());
    return m.back();
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >>t;
    while (t--) {
        int n, tmp;
        cin >>n;
        vector <int> v;
        for (int i = 0; i < n; i++)
        {
            cin >>tmp;
            v.push_back(tmp);
        }
        cout <<solve(v, n) <<endl;    
    }
return 0;
}