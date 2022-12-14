#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long int t, n, count;
    cin >>t;
    while (t--) {
        count=0;
        cin >>n;
        vector <int> nums={};
        for (int i = 1; i*i <= n; i++)
        {
            nums.push_back(i*i);
        }
        for (int i = 1; i*i*i <= n; i++)
        {
            nums.push_back(i*i*i);
        }
        vector<int>::iterator iter;
        sort(nums.begin(), nums.end());
        iter = unique(nums.begin(), nums.end());
        nums.resize(distance(nums.begin(), iter));
 
        cout <<nums.size() <<endl; 
    }
 
return 0;
}