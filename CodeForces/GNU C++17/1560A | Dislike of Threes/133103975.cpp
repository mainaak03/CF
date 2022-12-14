#include <iostream>
using namespace std;
 
int num(int k) {
int arr[1001];
int i=1;
int j=0;
int count=0;
while (count<=k) {
if (i%3 != 0 && i%10 != 3) {arr[j]=i; j++; i++; count++;}
else {i++;}
}
return arr[k-1];
}
 
int main() {
 
int t;
cin>>t;
int k;
for (int i=0; i<t; i++) {
        cin>>k;
        cout<<num(k) <<endl;
}
return 0;
}