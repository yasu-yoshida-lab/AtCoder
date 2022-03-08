#include <bits/stdc++.h>
using namespace std;

int main() { 
	string s;
	int l, r;
	cin >> l >> r;
	cin >> s;

	while (l < r) {
		swap(s[l-1], s[r-1]);
		++l;
		--r;
	}

	cout << s << endl;

	return 0;
}
