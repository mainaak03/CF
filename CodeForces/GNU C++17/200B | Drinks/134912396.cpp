#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    float p;
    float total=0, juice=0;
    cin >>n;
    while (n--) {
        cin >>p;
        total++;
        juice += p/100;
    }
    float percent = (juice/total)*100;
    cout <<fixed <<setprecision(5) <<percent;
    return 0;
}