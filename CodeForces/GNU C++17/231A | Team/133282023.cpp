#include <iostream>
using namespace std;
 
int main() {
int n;
cin >>n;
bool p, q, r;
int count=0;
for (int i=0; i<n; i++) {
    cin >>p >>q >>r;
    if ( (p==1 && q==1) || (p==1 && r==1) || (q==1 && r==1) || (p==1 && q==1 && r==1) ) {count++;}
}
cout <<count;
return 0;
}