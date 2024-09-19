#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

void solve() {
	int n;
	cin>>n;

	vector<int> index;

	for(int i=0; i<n; i++) {
		for(int j=1; j<=4; j++) {
			char x;
			cin>>x;

			if(x == '#'){				
				index.insert(index.begin(), j);
			}
		}
	}

	for(int i=0; i<index.size(); i++) {
		cout<<index[i]<<" ";
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

