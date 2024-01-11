#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
const int MOD = 1e9 + 7;

int dx[4]={-1, 0, 1, 0}, dy[4]={0,1,0,-1};
int vis[9][9];
int p[48];

int dfs(int i, int j, int ind){
    if((vis[i][j-1] && vis[i][j+1]) && (!vis[i-1][j] && !vis[i+1][j]))return 0;
    if((vis[i-1][j] && vis[i+1][j]) && (!vis[i][j-1] && !vis[i][j+1]))return 0;
    if(i==7 && j==1){//check end condition
        return ind==48 ? 1 : 0;
    }
    if(ind==48)return 0;

    int res=0;
    vis[i][j]=1;
    if(p[ind] < 4){
        int ni=i+dx[p[ind]], nj=j+dy[p[ind]];
        if(!vis[ni][nj])res+=dfs(ni,nj,ind+1);
    }else{
        for(int c=0;c<4;c++){
            int ni=i+dx[c], nj=j+dy[c];
            if(!vis[ni][nj])res+=dfs(ni,nj,ind+1);
        }
    }
    vis[i][j]=0;
    return res;
}

int main(){
    for(int i=0;i<48;i++){
        char c;cin>>c;
        if(c=='U')p[i]=0;
        else if(c=='R')p[i]=1;
        else if(c=='D')p[i]=2;
        else if(c=='L')p[i]=3;
        else p[i]=4;
    }
    for(int i = 0;i < 9; i++)
        vis[0][i]=1,vis[8][i]=1,vis[i][0]=1,vis[i][8]=1;
    for(int i=1;i<8;i++)
        for(int j=1;j<8;j++)
            vis[i][j]=0;
    cout << dfs(1, 1, 0);
    return 0;
}