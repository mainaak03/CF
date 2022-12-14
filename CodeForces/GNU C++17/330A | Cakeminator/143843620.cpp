#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int r, c;
    cin >>r >>c;
    char arr[r][c];
    set <int> row, col;
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            cin >>arr[i][j];
            if (arr[i][j]=='S') {
                row.insert(i);
                col.insert(j);
            }
        }
    }
    int res = (r*c)-(row.size()*col.size());
    cout <<res <<endl;
return 0;
}