#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() { 
	int n; 
	cin >> n;
	vector<ll> vec(n); 
	for (int i = 0; i < n; ++i) { cin >> vec[i]; }

	map<int, bool> mp;
	for (auto x : vec) { mp[x] = true; }
	cout << mp.size() << endl;

	set<int> se;
	for (auto x : vec) { se.insert(x); }
	cout << se.size() << endl;

	return 0;
}
