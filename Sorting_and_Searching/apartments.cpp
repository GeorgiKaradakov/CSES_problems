#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
const int MAXN=2e5;

int ap[MAXN], apl[MAXN];

int main(){
    int n, m, k;cin>>n>>m>>k;
    for(int i=0;i<n;i++)
        cin>>apl[i];
    for(int i=0;i<m;i++)
        cin>>ap[i];
    sort(ap, ap+m);
    sort(apl, apl+n);

    int ans=0;
    for(int i=0, j=0;i<n;i++){
        while(j<m&&ap[j]<apl[i]-k)j++;

        if(j<m&&ap[j] <= apl[i]+k)
            j++,ans++;
    }

    cout << ans;

    return 0;
}
/*
45 60 60 80
30 60 75
*/