#include <iostream>
using namespace std;
 
int main() {
 
int n;
cin >>n;
int ways=0;
for (int i=1; i<=n/2; i++) {
    if ( (n-i)%i==0 && (n-i)/i>=1 ) {ways++;}
}
cout <<ways;
return 0;
}