#include <iostream>
using namespace std;
 
void perm(int t) {
    int arr[t];
int temp[t];
for (int i=0; i<t; i++) {
    arr[i]=i+1;
}
for (int i=0; i<t; i++) {
    temp[i]=arr[i];
}
int i=1, j=0;
while (i<t && j<t-1) {
    arr[i]=temp[j];
    i++;
    j++;
}
arr[0]=temp[t-1];
for (int i=0; i<t; i++) {
    cout <<arr[i] <<" ";
}
cout <<endl;
}
 
int main() {
int n, t;
cin >>n;
for (int i=0; i<n; i++) {
    cin >>t;
    perm(t);
}
return 0;
}