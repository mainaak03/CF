#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, temp;
    cin >>t;
    while (t--) {
        cin >>n;
        vector <int> v;
        for (int i = 0; i < n; i++)
        {
            cin >>temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end());
        cout <<v.back()-v.front() <<endl;
    }
return 0;
}