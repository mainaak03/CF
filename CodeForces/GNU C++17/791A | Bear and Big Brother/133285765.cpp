#include <iostream>
using namespace std;
 
int main() {
 
int a, b, y=0;
cin >>a >>b;
for (int i=1; i>0; i++) {
    a*=3;
    b*=2;
    if (a>b) {cout <<i; break;}
}
 
return 0;
}