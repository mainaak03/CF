#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string s1="I hate ", s2="I love ", s3="it ", s4="that ";
    string res;
    cin >>n;
    if (n==1) {cout <<"I hate it";}
    else{
        for (int i=1; i<=n; i++) {
            if (i%2==0) {res+=s2;}
            else {res+=s1;}
            if (i!=n) {res+=s4;}
        }
        cout <<res+s3;
    }
    return 0;
}