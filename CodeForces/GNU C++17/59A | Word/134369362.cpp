#include <bits/stdc++.h>
using namespace std;
 
int main() {
    char word[150];
    cin >>word;
    int n= strlen(word);
    int lower=0, upper=0;
    for (int i=0; i<n; i++) {
        if (word[i]>='a' && word[i]<='z') {lower++;}
    }
    for (int i=0; i<n; i++) {
        if (word[i]>='A' && word[i]<='Z') {upper++;}
    }
    if (upper>lower) {
        for (int i=0; i<n; i++) {
            if (word[i]>='a' && word[i]<='z') {word[i] = toupper(word[i]);}
        }
    }
    else {
        for (int i=0; i<n; i++) {
            word[i] = tolower(word[i]);
        }
    }
    cout <<word;
    return 0;
}