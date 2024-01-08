#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int n;cin>>n;

    set<int> c, d;
    if(n % 4 == 0){
        for(int i=1;i<=n;i++){
            if(i%4== 0 || i%4==1)
                c.insert(i);
            else d.insert(i);
        }
    }else if(n % 4 == 3){
        for(int i=1;i<=n;i++){
            if(i%4== 2 || i%4==1)
                c.insert(i);
            else d.insert(i);
        }
    }else {
        cout << "NO";
        return 0;
    }
    cout << "YES\n" << c.size() << '\n';
    for(auto el : c)
        cout << el << ' ';
    cout << '\n' << d.size() << '\n';

    for(auto el : d)
        cout << el << ' ';

    return 0;
}