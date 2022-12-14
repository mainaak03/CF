#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >>t;
    while (t--) {
    char keys[27];
    char word[55];
    int pos[26];
    char alphas[27];
 
    int j=0;
    for (char ch='a'; ch<='z'; ch++) {
        alphas[j] = ch; j++;
    }
 
    cin >>keys;
    cin >>word;
 
    j=0;
    for (char ch='a'; ch<='z'; ch++) {
        for (int i=0; i<26; i++) {
            if (ch == keys[i]) {pos[j] = i+1; j++; break;}
        }
    }
    
    int t1, t2, time = 0;
    for (int i=0; i<strlen(word)-1; i++) {
 
        for (int j=0; j<26; j++) {
            if (word[i]==alphas[j]) {t1 = pos[j]; break;}
        }
 
        for (int j=0; j<26; j++) {
            if (word[i+1]==alphas[j]) {t2 = pos[j]; break;}
        }
        time += abs(t2-t1);
    }
    cout <<time <<endl;
    }
    return 0;
}