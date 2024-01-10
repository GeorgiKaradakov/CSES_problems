#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;

ll find_min(ll arr[], ll c, ll t, ll i){
    if(i==0)return abs((t-c) - c);

    return min(find_min(arr, c + arr[i], t, i-1), find_min(arr, c, t, i-1));
}

int main(){
    int n;cin>>n;
    ll a[n], s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s += a[i];
    }

    cout << find_min(a, 0, s, n-1);

    return 0;
}