#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
 
int main() {
char arr1[101];
char arr2[101];
cin >>arr1;
cin >>arr2;
int n = strlen(arr1);
for (int i=0; i<n; i++) {
    if (arr1[i]==arr2[i]) {cout <<"0";}
    else {cout <<"1";}
}
 
return 0;
}