#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<string> name(n);

	for (int i = 0; i < n; ++i) { 
		string s; 
		cin >> s;
		string t;
		cin >> t;
		name[i] = s + ", " + t;
	}

	set<string> st;
	for (const auto val : name) { st.insert(val); }

	if (name.size() != st.size()) { cout << "Yes" << endl; }
	else { cout << "No" << endl; }

	return 0;
}
