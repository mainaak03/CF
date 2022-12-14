#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int x, count=0;
    cin >>x;
 
    while (x>=0) {
    if (x==0) {cout <<count; break;}
 
    else if (x>=5) {
        count+=x/5;
        x=x%5;
    }
    else if (x>=4) {
        count+=x/4;
        x=x%4;
    }
    else if (x>=3) {
        count+=x/3;
        x=x%3;
    }
    else if (x>=2) {
        count+=x/2;
        x=x%2;
    }
    else if (x>=1) {
        count+=x/1;
        x=x%1;
    }
 
    }
return 0;
}