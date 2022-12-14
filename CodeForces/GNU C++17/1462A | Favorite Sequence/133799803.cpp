#include <iostream>
using namespace std;
void seq() {
int n;
cin >>n;
int arr[n];
for (int i=0; i<n; i++) {cin >>arr[i];}
int res[n]={0};
int p=0, q=n-1, i=0;
while (p<=q) {
    res[i]=arr[p];
    i++;
    p++;
    res[i]=arr[q];
    i++;
    q--;
}
for (int i=0; i<n; i++) {cout <<res[i] <<" ";}
}
 
int main() {
int t;
cin >>t;
for (int i=0; i<t; i++) {
    seq();
    cout <<endl;
}
return 0;
}