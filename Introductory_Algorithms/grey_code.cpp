#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;

int main(){
    int n;cin>>n;
    int r=0, t = pow(2, n);
    
    for(int j=0;j<n;j++)
        cout << ((r >> j)&1);
    cout << '\n';
    for(int i=1;i<t;i++){
        int g=r^(i&-i);
        r=g;

        for(int j=0;j<n;j++)
            cout << ((g >> j)&1);
        cout << '\n';
    }
    
    return 0;
}