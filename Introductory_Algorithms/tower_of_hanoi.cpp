#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;

void solve(int n, int f, int t, int a){
    if(n==0)return;
    solve(n-1, f, a, t);
    cout << f << ' ' << t << '\n';
    solve(n-1, a, t, f);
}

int main(){
    int n;cin>>n;
    cout << pow(2,n)-1<<'\n';
    solve(n, 1, 3, 2);
    return 0;
}