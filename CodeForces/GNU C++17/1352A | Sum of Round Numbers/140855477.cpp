#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, count;
    string s;
    cin >>t;
    while (t--) {
        count=0;
        cin >>s;
        for (int i=0; i<s.size(); i++) {
            if (s[i]=='0') {continue;}
            else {
                count++;}
        }
        cout <<count <<endl;
        for (int i=0; i<s.size(); i++) {
            if (s[i]=='0') {continue;}
            else {
                cout <<(int)(s[i]-48)*pow(10, s.size()-i-1) <<" ";
            }
        }
        cout <<endl;
    }
return 0;
}