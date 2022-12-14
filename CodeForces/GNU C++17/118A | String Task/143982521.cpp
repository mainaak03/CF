#include <bits/stdc++.h>
using namespace std;
 
inline bool find(vector<char> v, char ch) {
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]==ch) {
            return 1;
        }
    }
    return 0;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;
    cin >>s;
    vector <char> v = {'a', 'e', 'i', 'o', 'u', 'y'};
 
    for (int i = 0; i < s.length(); i++)
    {
        s[i]=tolower(s[i]);
    }
    string res;
    for (int i = 0; i < s.length(); i++)
    {
        if (!find(v, s[i])) {
            res += s[i];
        }
    }
    int i=0;
    int n = res.length();
    while (i<n) {
        cout <<'.' <<res[i];
        i++;
    }
return 0;
}