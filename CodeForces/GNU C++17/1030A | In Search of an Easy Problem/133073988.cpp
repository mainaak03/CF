#include <iostream>
using namespace std;
 
int main() {
 
int n;
cin>>n;
bool arr[n];
for (int i=0; i<n; i++) {
    cin>>arr[i];
}
bool trig=false;
for (int i=0; i<n; i++) {
    if (arr[i]==1) {trig=true; break;}
}
if (trig==true) {cout<<"HARD";}
else {cout<<"EASY";}
return 0;
}