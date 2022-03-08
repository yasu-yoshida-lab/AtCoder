#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int solve(string s) { 
	for (int i = 0; i < (int)s.size(); ++i) { 
		if (s[i] == '#') { return i; }
	}
	return -1;
}


int main() { 
	int n;
	cin >> n;
	vector<string> s(n);

	for (auto & val : s) { cin >> val; }

	int count = 0;
	bool ans = false;
	for (int i = 0; i < n; ++i) { 
		for (int j = 0; j < n; ++j) { 
			if (i + 5 < n) { 
				count = 0;
				for (int k = 0; k < 6; ++k) { 
					if (s[i + k][j] == '#') { count++; }
				}
				if (count >= 4) { ans = true; }
			}
			if (j + 5 < n) { 
				count = 0;
				for (int k = 0; k < 6; ++k) { 
					if (s[i][j + k] == '#') { count++; }
				}
				if (count >= 4) { ans = true; }
			}
			if ((i + 5 < n) && (j + 5 < n)) { 
				count = 0;
				for (int k = 0; k < 6; ++k) { 
					if (s[i + k][j + k] == '#') { count++; }
				}
				if (count >= 4) { ans = true; }
			}
			if ((0 <= i - 5) && (j + 5 < n)) { 
				count = 0;
				for (int k = 0; k < 6; ++k) { 
					if (s[i - k][j + k] == '#') { count++; }
				}
				if (count >= 4) { ans = true; }
			}
		}
	}

	if (ans) { cout << "Yes" << endl; }
	else { cout << "No" << endl; }

	return 0;
}
