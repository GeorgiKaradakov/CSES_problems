#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int n;cin >> n;

    int mx = 0;
    ll res = 0;
    for(int i = 0; i < n; i++){
        int t;cin >> t;
        
        mx = max(mx, t);
        res += mx - t;
    }

    cout << res << '\n';

    return 0;
}