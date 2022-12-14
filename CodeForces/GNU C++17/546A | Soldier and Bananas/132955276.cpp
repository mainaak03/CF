#include <iostream>
using namespace std;
 
int main() {
 
int k, n, w;
cin >>k >>n >>w ;
int cost=0;
for (int i=0; i<=w; i++) {
    cost += i*k;
}
int res;
res = cost - n ;
if (res<0) {cout<<"0";}
else {cout<<res;}
return 0;
}