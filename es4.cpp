#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

void solve() {
	int n, m, k;
	cin>>n>>m>>k;

	for(int i=n; i>m; --i) {
		cout<<i<<" ";
	}

	for(int i=1; i<=m; ++i) {
		cout<<i<<" ";
	}

	cout<<"\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;

	while(t--) {
		solve();
	}	

	return 0;
}

