#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int n;cin >> n;    

    if(n == 2 || n == 3){
        cout << "NO SOLUTION" << '\n';
        return 0;
    }

    if(n % 2 == 1){
        for(int i = 1; i <= n; i += 2)cout << i << ' '; 
        for(int i = 2; i <= n; i += 2)cout << i << ' '; 
    }else{
        for(int i = 2; i <= n; i += 2)cout << i << ' '; 
        for(int i = 1; i <= n; i += 2)cout << i << ' '; 
    }

    return 0;
}