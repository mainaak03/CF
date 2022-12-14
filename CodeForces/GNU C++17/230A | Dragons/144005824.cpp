#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s, n, x, y;
    cin >>s >>n;
    vector <pair<int, int>> v;
    for (int i=0; i<n; i++) {
        cin >>x >>y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());
 
    bool trig = 1;
    for (int i=0; i<n; i++) {
        if (s<=v[i].first) {
            trig = 0;
            cout <<"NO";
            break;
        }
        else {
            s += v[i].second;
        }
    }
    if (trig == 1) {
        cout <<"YES";
    }
return 0;
}