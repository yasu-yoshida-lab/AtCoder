#include <bits/stdc++.h>
using namespace std;

int main() { 
	vector<string> v = { "ABC", "ARC", "AGC", "AHC" };

	for (int i = 0; i < 3; ++i) { 
		string s; 
		cin >> s;
		auto itr = find(v.begin(), v.end(), s);
		v.erase(itr);
	}

	for (const auto val : v) { cout << val << endl; }

	return 0;
}
