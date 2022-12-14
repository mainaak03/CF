#include <iostream>
using namespace std;
typedef long long ll;
 
int main() {
    int t;
    cin >>t;
    ll input;
    string num;
    while (t--) {
    cin >>num;
    input = stoi(num);
    bool isEvenPresent = 0;
    int firstEvenIndex;
 
    for (int i = 0; i<num.length(); i++)
    {
        if (num[i]%2 == 0) {isEvenPresent = 1; firstEvenIndex = i; break;}
    }
    
    if (input%2 == 0) {cout <<"0" <<endl;}
    else if (isEvenPresent == 0) {cout <<"-1" <<endl;}
    else if (isEvenPresent == 1 && firstEvenIndex==0) {cout <<"1" <<endl;}
    else {cout <<"2" <<endl;}
    }
 
    return 0;
}