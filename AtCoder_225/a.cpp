#include <bits/stdc++.h>
using namespace std;

int main() { 
	string s; 
	cin >> s;

	set<char> st;
	for (auto val : s) { st.insert(val); }

	int ans = 0;
	for (int i = st.size(); i > 0; --i) { ans += i; }

	cout << ans << endl;

	return 0;
}
