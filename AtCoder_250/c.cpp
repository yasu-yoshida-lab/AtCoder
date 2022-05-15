#include <bits/stdc++.h>
using namespace std;
using ll = long long;

template<class T>
bool chmax(T& a, T& b) 
{ 
	if (a < b) { 
		a = b; 
		return true; 
	}
	return false;
}

int main() 
{
	ll n; cin >> n;
	set<string> st; 

	int ma = -1; 
	int ans = 0; 

	for (int i = 0; i < n; ++i) { 
		string s; cin >> s;
		int t; cin >> t; 

		if (st.count(s)) { continue; }
		if (chmax(ma, t)) { ans = i + 1; }

		st.emplace(s);
	}
	cout << ans << endl;

	return 0;
}
