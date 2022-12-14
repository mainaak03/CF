#include <iostream>
using namespace std;
 
int main() {
int n, h;
cin >>n >>h;
int width=n;
int temp;
for (int i=0; i<n; i++) {
    cin>>temp;
    if (temp>h) {width++;}
}
cout <<width;
return 0;
}