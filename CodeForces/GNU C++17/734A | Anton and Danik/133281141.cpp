#include <iostream>
using namespace std;
 
int main() {
int n;
cin >>n;
char str[n+1];
cin>>str;
int anton=0;
int danik=0;
for (int i=0; i<n; i++) {
    if (str[i] == 'A') {anton++;}
    else if (str[i] == 'D') {danik++;}
}
if (anton>danik) {cout <<"Anton";}
else if (danik>anton) {cout <<"Danik";}
else {cout <<"Friendship";}
return 0;
}