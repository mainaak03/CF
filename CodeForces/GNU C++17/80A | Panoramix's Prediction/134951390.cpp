#include <bits/stdc++.h>
using namespace std;
 
int isPrime(int a) {
    bool trig=0;
    for (int i=2; i<a; i++) {
        if (a%i == 0) {trig=1; return 0;}
    }
    if (trig == 0) {return 1;}
}
 
int main() {
    int n, m;
    cin >>n >>m;
    int temp;
    for (int i=n+1; i<55; i++) {
        if (isPrime(i)>0) {temp = i; break;}
    }
    if (temp == m) {cout <<"YES";}
    else {cout <<"NO";}
    return 0;
}