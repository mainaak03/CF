#include <bits/stdc++.h>
using namespace std;
 
void check(int x, int y, int z) {
    bool flag=0;
    if (x!=y) {
        if (x+y==z) {flag=1;}
    }
    if (y!=z) {
        if (y+z==x) {flag=1;}
    }
    if (z!=x) {
        if (z+x==y) {flag=1;}
    }
    if (x==y) {
        if (2*x==z || z%2==0) {flag=1;}
    }
    if (y==z) {
        if (2*y==x || x%2==0) {flag=1;}
    }
    if (z==x) {
        if (2*z==y || y%2==0) {flag=1;}
    }
 
    if (flag==1) {
        cout <<"YES" <<endl;
    }
    else {
        cout <<"NO" <<endl;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, l1, l2, l3;
    cin >>t;
    while (t--) {
        cin >>l1 >>l2 >>l3;
        check(l1, l2, l3);
    }
return 0;
}