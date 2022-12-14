#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, used=0, hrs=0;
    cin >>a >>b;
    while (a!=0) {
        hrs++;
        a--;
        used++;
        if (used==b) {
            a++;
            used -=b;
        }
    }
    cout <<hrs;
return 0;
}