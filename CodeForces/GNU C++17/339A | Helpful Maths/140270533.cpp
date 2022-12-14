#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s, t;
    vector <char> temp;
    cin >>s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]!='+') {
            temp.push_back(s[i]);
        }
    }
    sort(temp.begin(), temp.end());
    int i=0;
    while (i<=temp.size()-1) {
        t += temp[i];
        i++;
        t += '+';
    }
    t.pop_back();
    cout <<t;
 
return 0;
}