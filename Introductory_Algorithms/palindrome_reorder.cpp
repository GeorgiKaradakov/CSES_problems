#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;

int main(){
    map<char, int> s;
    string t;cin>>t;

    for(int i = 0; i < t.size(); i++)
        s[t[i]]++;

    int check = 0;
    for(char c = 'A'; c <= 'Z'; c++){
        check += s[c]%2;
    }

    if(check>1){
        cout << "NO SOLUTION" << '\n';
        return 0;
    }

    for(char c = 'A'; c <= 'Z'; c++)
        if(!(s[c]%2))
            for(int j=0;j<s[c]/2;j++)cout << c;
    for(char c = 'A'; c <= 'Z'; c++)
        if(s[c]%2)
            for(int j=0;j<s[c];j++)cout << c;
    for(char c='Z';c>='A';c--)
        if(!(s[c]%2))
            for(int j=0;j<s[c]/2;j++)cout<<c;

    return 0;
}