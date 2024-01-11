#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;

string s[8];
bool ld[15], rd[15], r[8];
int ans=0;

void solve(int j){
    if(j==8){ans++;return;}

    for(int i=0;i<8;i++){
        if(s[i][j]=='.'&&!r[i]&&!ld[i-j+7]&&!rd[i+j]){
            r[i]=1,ld[i-j+7]=1,rd[i+j]=1;
            solve(j+1);
            r[i]=0,ld[i-j+7]=0,rd[i+j]=0;
        }
    }
}

int main(){
    for(int i=0;i<8;i++)
        cin>>s[i];

    solve(0);
    cout << ans;

    return 0;
}