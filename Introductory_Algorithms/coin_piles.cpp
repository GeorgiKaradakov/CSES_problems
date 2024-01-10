#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;

int main(){
    int t;cin>>t;
    
    while(t--){
        int n,m;cin>>n>>m;
        cout << ((n+m)%3==0 && min(n,m)*2>=max(n,m) ? "YES" : "NO") << '\n';
    }
    return 0;
}