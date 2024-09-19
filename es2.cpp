#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

void solve() {
	int a, b;
	cin>>a>>b;

	vector<int> min;

	for(int i=1; i<=10; i++) {
		float sum = (i-a)+(b-i);

		min.pb(sum);
	}

	int minimum = min[0];

	for(int i=0; i<min.size(); i++) {
		if(min[i]<minimum) {
			minimum = min[i];
		}
	}

	cout<<minimum<<"\n";
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

