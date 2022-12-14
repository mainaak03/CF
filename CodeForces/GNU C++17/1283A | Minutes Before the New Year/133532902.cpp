#include <iostream>
using namespace std;
 
int main() {
 
int h, m;
int t;
cin >>t;
for (int i=0; i<t; i++) {
    cin >>h >>m;
    if (24-h>1) {cout <<(24-h)*60-m <<endl;}
    else {cout <<60-m <<endl;}
}
return 0;
}