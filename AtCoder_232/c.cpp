#include <bits/stdc++.h>
using namespace std;

int main() { 
	int n, m;
	cin >> n >> m;
	vector<vector<bool>> x(n, vector<bool>(n)), y(n, vector<bool>(n));

	for (int i = 0; i < m; ++i) { 
		int a, b; 
		cin >> a >> b;
		a -= 1, b -= 1;
		x[a][b] = x[b][a] = true;
	}

	for (int i = 0; i < m; ++i) { 
		int c, d;
		cin >> c >> d;
		c -= 1, d -= 1;
		y[c][d] = y[d][c] = true;
	}

	vector<int> p(n);
	iota(p.begin(), p.end(), 0);

	do { 
		bool ans = true;
		for (int i = 0; i < n; ++i) { 
			for (int j = 0; j < n; ++j) { 
				if (x[i][j] != y[p[i]][p[j]]) { ans = false; }
			}
		}

		if (ans) { 
			cout << "Yes" << endl; 
			return 0;
		}
	} while(next_permutation(p.begin(), p.end()));

	cout << "No" << endl;

	return 0;
}
