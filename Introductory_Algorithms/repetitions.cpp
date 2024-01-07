#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    string s;cin >> s;

    int mx = 0, curr = 0;
    char c = 'A';
    for(auto ch : s){
        if(c == ch){
            curr++;
            mx = max(mx, curr);
        }else{
            curr = 1;
            c = ch;
        }
    }

    cout << mx << '\n';

    return 0;
}