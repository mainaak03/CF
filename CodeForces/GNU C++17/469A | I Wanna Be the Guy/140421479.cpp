#include <bits/stdc++.h>
using namespace std;
 
bool search(int arr[],int size, int val) {
    for (int i=0; i<size; i++) {
        if (arr[i]==val) {return 1;}
    }
    return 0;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, p, q, temp;
    cin >>n >>p;
    int x[p];
    for (int i = 0; i < p; i++)
    {
        cin >>x[i];
    }
    cin >>q;
    int y[q];
    for (int i = 0; i < q; i++)
    {
        cin >>y[i];
    }
    for (int i=1; i<=n; i++) {
        if (search(x, p, i)==0 && search(y, q, i)==0) {cout <<"Oh, my keyboard!"; return 0;}
    }
    cout <<"I become the guy.";
return 0;
}