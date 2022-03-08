#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() { 
	ll n;

	string s;
	cin >> n >> s;

	deque<ll> a = { n };

	for (ll i = n - 1; i >= 0; i--) { 
		if (s[i] == 'L') { a.push_back(i); }
		else if (s[i] == 'R') { a.push_front(i); } 
	} 

	for (ll i = 0; i <= n; ++i) { 
		if (i < n) { cout << a[i] << ' '; } 
		else { cout << a[i] << endl; }
	}

	return 0;
}
