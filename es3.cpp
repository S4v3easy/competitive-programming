#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

void solve() {
	int n, m;
	cin>>n>>m;

	vector<int> arr(n);

	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}

	int max_num = *max_element(arr.begin(), arr.end());

	for(int i=0; i<m; i++) {

		int l, r;
		char c;

		cin>>c>>l>>r;

		if(max_num>=l && max_num<=r) {
			if(c == '+') {
				max_num+=1;
			} else if(c == '-') {
				max_num-=1;
			}
		}

		cout<<max_num<<" ";
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

