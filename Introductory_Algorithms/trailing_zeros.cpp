#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;

int main(){
    int n;cin>>n;

    int r = 0;
    for(int i = 5; n/i >= 1; i *= 5)r += n/i;
    
    cout << r << '\n';
    return 0;
}