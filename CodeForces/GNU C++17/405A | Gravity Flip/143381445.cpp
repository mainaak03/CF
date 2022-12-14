#include <bits/stdc++.h>
using namespace std;
 
int main() {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int t, n;
 cin >>n;
 vector <int> v;
 for (int i = 0; i < n; i++)
 {
  cin >>t;
  v.push_back(t);
 }
 sort(v.begin(), v.end());
 for (int i = 0; i < n; i++)
 {
  cout <<v[i] <<" ";
 }
return 0;
}