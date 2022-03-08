#include <bits/stdc++.h>
using namespace std;

int main() { 
	int n, m;
	cin >> n >> m;

	vector b(n, vector<int>(m, 0));
	for (int i = 0; i < n; ++i) { for (int j = 0; j < m; ++j) { cin >> b[i][j]; } }

	for (int i = 0; i < n; ++i) { for (int j = 0; j < m; ++j) { b[i][j] -= 1; } }

	bool ans = true;

	for (int i = 0; i < n; ++i) { 
		for (int j = 0; j < m - 1; ++j) { 
			if (!((b[i][j + 1] - b[i][j] == 1) && (b[i][j] % 7 < b[i][j + 1] % 7))) { ans = false; }
		} 
	}
	for (int j = 0; j < m; ++j) { 
		for (int i = 0; i < n - 1; ++i) {
			if (!(b[i + 1][j] - b[i][j] == 7)) { ans = false; }
		} 
	}

	cout << (ans ? "Yes" : "No") << endl;

	return 0;
}
