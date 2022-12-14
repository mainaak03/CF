#include <iostream>
#include <string.h>
using namespace std;
 
int main() {
int t;
cin>>t;
char str[101];
for (int i=0; i<t; i++) {
cin>>str;
int n = strlen(str);
 
if (n>10) {
    cout <<str[0] <<n-2 <<str[n-1] <<endl;
}
else {puts(str);}
}
return 0;
}