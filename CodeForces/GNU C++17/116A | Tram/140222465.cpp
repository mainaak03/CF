#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    vector <int> cap;
    int n, a, b, count=0;
    cin >>n;
    while (n--) {
        cin >>a >>b;
        cap.push_back(count+b-a);
        count+=b-a;
    }
    sort(cap.begin(), cap.end());
    cout <<cap.back() <<endl;
 
return 0;
}