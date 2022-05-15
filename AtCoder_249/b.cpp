#include <bits/stdc++.h>
using namespace std;

int main() 
{ 
	string s; cin >> s;

	bool low_c = false; 
	bool upp_c = false; 
	set<char> st; 

	for (const auto c : s) { 
		if (islower(c)) { low_c = true; }
		if (isupper(c)) { upp_c = true; }
		st.insert(c);
	}


	string ans = "No"; 

	if (low_c && upp_c && s.size() == st.size()) { ans = "Yes"; }

	cout << ans << endl;

	return 0; 
}
