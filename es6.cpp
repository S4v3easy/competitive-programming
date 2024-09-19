#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

void solve() {
	int n;
	cin>>n;

	string a;

	for(int i=0; i<n; i++) {
		char x;
		cin>>x;

		a+=x;
	}

	int cont = 0;

	for(int i=0; i<n-1; i++) {
		if(a[i] == '1' && a[i+1] == '1') {
			cont++;
		}
	}
	
	bool has111 = (a.find("111") != string::npos);

	bool x = (a[0] == '1' && a[n-1] == '1');

	int condition1 = has111;
	int condition2 = (cont >= 2);
	int condition3 = x;
	int condition4 = (a[0] == '1' || a[n-1] == '1') && cont >= 1;

	if(condition1 || condition2 || condition3 || condition4) {
		cout<<"YES\n";
	} else {
		cout<<"NO\n";
	}
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

