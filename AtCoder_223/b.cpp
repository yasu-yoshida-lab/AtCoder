#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; 
	cin >> s;

	set<string> st;
	st.insert(s);
	for (int i = 0; i < s.size(); ++i) {
		s = s + s[0]; 
		s.erase(s.begin());
		st.insert(s);
	}

	cout << *(st.begin()) << endl;
	cout << *(--st.end()) << endl;

	return 0;
}
