#include <iostream>
using namespace std;
 
int main() {
 
int n;
cin >>n;
int vectorArr[n][3];
 
for (int i=0; i<n; i++) {
    for (int j=0; j<3; j++) {
        cin >>vectorArr[i][j];
    }
}
 
int sumX=0, sumY=0, sumZ=0;
for (int i=0; i<n; i++) {sumX += vectorArr[i][0];}
for (int i=0; i<n; i++) {sumY += vectorArr[i][1];}
for (int i=0; i<n; i++) {sumZ += vectorArr[i][2];}
 
if (sumX==0 && sumY==0 && sumZ==0) {cout <<"YES";}
else {cout <<"NO";}
 
return 0;
}