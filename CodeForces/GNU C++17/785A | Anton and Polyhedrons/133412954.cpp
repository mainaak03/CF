#include <iostream>
#include <string.h>
using namespace std;
 
int main() {
 
int n;
cin >>n;
char str[20];
int sides=0;
for (int i=0; i<n; i++) {
    cin >>str;
    if (str[0]=='T') {sides+=4;}
    if (str[0]=='C') {sides+=6;}
    if (str[0]=='O') {sides+=8;}
    if (str[0]=='D') {sides+=12;}
    if (str[0]=='I') {sides+=20;}
}
cout <<sides;
return 0;
}