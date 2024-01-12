#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;

int main(){
    int n;cin>>n;
    set<int> s;
    for(int i=0; i<n; i++){
        int t;cin>>t;
        s.insert(t);
    }

    cout << s.size();

    return 0;
}