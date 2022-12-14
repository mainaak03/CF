#include <iostream>
using namespace std;
 
int main() {
 
    long int t, n;
    cin>>t;
    for (int i=1; i<=t; i++) {
    n=0;
    cin>>n;
    if (n<=2) {cout<<"0" <<endl;}
    else {cout<<(n-1)/2 <<endl;}
}
return 0;
}