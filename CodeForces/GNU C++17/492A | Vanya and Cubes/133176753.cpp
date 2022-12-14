#include <iostream>
#include <cmath>
using namespace std;
 
long int sum(int l) {
    long int sum = ((l*(l+1)*(2*l +1))/6 + (l*(l+1))/2 )/2 ;
    return sum;
}
 
int main() {
 
int l=1;
int n;
int res;
cin>>n;
if (n==1) {res=1;}
else {
while (sum(l)<=n) {res=l; l++;}
}
cout <<res;
return 0;
}