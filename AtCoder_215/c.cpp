#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	int k; cin >> k;

	sort(s.begin(), s.end());

	set<string> st;
	do { 
		st.insert(s);
	} while (next_permutation(s.begin(), s.end()));

	auto itr = st.begin();
	for (int i = 0; i < k - 1; ++i) { ++itr; }
	cout << *itr << endl;

	return 0;
}
