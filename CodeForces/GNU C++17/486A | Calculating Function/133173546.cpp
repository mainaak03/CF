#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
 
long long int sum=0;
long long int n;
cin>>n;
if (n%2==0) {sum= n/2 ;}
else {sum= (-1)*(n+1)/2 ;}
cout<<sum;
return 0;
}