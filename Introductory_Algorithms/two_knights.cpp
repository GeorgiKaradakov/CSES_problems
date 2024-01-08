#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int n;cin>>n;
 
    for(int i = 1; i <= n; i++){
        ll k1 = i*i, k2 = k1 - 1;
        ll red = 4*(i-1)*(i-2);

        cout << (k1*k2/2)-red << '\n';
    }

    return 0;
}