#include <bits/stdc++.h>
using namespace std;

int main() { 
	vector<vector<bool>> vec;
	vec.resize(11);
	for (auto &x : vec) { x.resize(11); }

	for (int i = 0; i <= 10; ++i) { 
		for (int j = 0; j <= 10; ++j) { 
			vec[i][j] = false;
			if (i + 1 == j) { vec[i][j] = true; }
			if (i - 1 == j) { vec[i][j] = true; }
		}
	}
	vec[1][10] = true;
	vec[10][1] = true;

	int a, b;
	cin >> a >> b;

	if (vec[a][b]) { cout << "Yes" << endl; } 
	else { cout << "No" << endl; }

	return 0;
}
