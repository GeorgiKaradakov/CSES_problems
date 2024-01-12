#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;
using ll = long long;
const int MOD = 1e9 + 7;
const int MAXN=2e5;

int main(){
    int n,m;cin>>n>>m;
    multiset<int, greater<int>> a;

    for(int i=0;i<n;i++){
        int t;cin>>t;
        a.insert(t);
    }
    for (int i=0;i<m;++i) {
		int t;cin >> t;
		auto it = a.lower_bound(t);
		if (it == a.end()) {
			cout << -1 << "\n";
		} else {
			cout << *it << "\n";
			a.erase(it);
		}
	}

    return 0;
}