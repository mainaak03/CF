#include <iostream>
using namespace std;
 
int main() {
 
bool arr[5][5];
for (int i=0; i<5; i++) {
    for (int j=0; j<5; j++) {
        cin>>arr[i][j];
    }
}
int row, col;
for (int i=0; i<5; i++) {
    for (int j=0; j<5; j++) {
        if (arr[i][j]==1) {row=i+1; col=j+1; break;}
    }
}
int moves;
moves = abs(row-3)+abs(col-3);
cout<<moves;
return 0;
}