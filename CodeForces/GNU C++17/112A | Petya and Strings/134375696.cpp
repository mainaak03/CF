#include <bits/stdc++.h>
using namespace std;
 
int main() {
    char word1[150];
    char word2[150];
    cin >>word1;
    cin >>word2;
    for (int i=0; i<strlen(word1); i++) {
        word1[i] = tolower(word1[i]);
        word2[i] = tolower(word2[i]);
    }
    bool flag=0;
    for (int i=0; i<strlen(word1); i++) {
        if (word1[i]<word2[i]) {cout <<"-1"; flag=1; break;}
        else if (word1[i]>word2[i]) {cout <<"1"; flag=1; break;}
    }
    if (flag==0) {cout <<"0";}
 
    return 0;
}