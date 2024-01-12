#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;
const int MAXN=2e5;

int a[MAXN];
bool vis[MAXN]{0};

int main(){
    int n,x;cin>>n>>x;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a, a+n);

    int i=0, j=n-1, ans=0;
    while(i<j){
        if(a[i]+a[j] > x){
            j--;
        }else{
            ++ans;
            vis[i]=vis[j]=1;
            i++, j--;
        }
    }

    for(int i=0;i<n;i++){
        ans+=!vis[i];
    }
    cout << ans;

    return 0;
}

/*
    7 2 3 9
    2 3 7 9
    2+3=5->1

*/