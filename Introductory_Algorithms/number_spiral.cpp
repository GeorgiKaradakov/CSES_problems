#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    ll x, y;cin >> y >> x;
        
    ll mx = max(x, y);
    ll sq = (mx - 1) * (mx - 1);

    if(mx % 2 == 0){
        if(x > y){
            cout << sq + y << '\n';
        }else{
            cout << (mx * mx) - x + 1 << '\n';
        }
    }else{
        if(x > y){
            cout << (mx * mx) - y + 1 << '\n';
        }else{
            cout << sq + x << '\n';
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;cin >> T;
    while(T--)solve();

    return 0;
}