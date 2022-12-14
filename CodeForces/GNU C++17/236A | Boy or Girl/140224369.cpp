#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;
    int ptr, count=1;
    cin >>s;
    sort(s.begin(), s.end());
 
    ptr = s[0];
 
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i]!=ptr) {
            count++;
            ptr=s[i];
        }
    }
    if (count%2==0) {cout <<"CHAT WITH HER!" <<endl;}
    else {cout <<"IGNORE HIM!" <<endl;}
 
return 0;
}