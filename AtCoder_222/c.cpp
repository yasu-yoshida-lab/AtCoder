#include <bits/stdc++.h>
using namespace std;

bool rank_sort(pair<int, int> p1, pair<int, int> p2) { 
	int win1 = p1.second;
	int win2 = p2.second;
	if (win1 > win2) { return true; }
	if (win1 < win2) { return false; }
	int id1 = p1.first;
	int id2 = p2.first; 
	return id1 < id2;
}

int battle(int id1, int id2, int j, vector<string> &A) { 
	char c1 = A[id1][j];
	char c2 = A[id2][j];

	if (c1 == c2) { return -1; }
	if (c1 == 'G' && c2 == 'C') { return id1; }
	if (c1 == 'C' && c2 == 'P') { return id1; }
	if (c1 == 'P' && c2 == 'G') { return id1; }

	return id2;
}

int main() {
	int n, m;
	cin >> n >> m;

	vector<string> A(2 * n);
	for (int i = 0; i < 2 * n; ++i) { cin >> A[i]; }

	vector<pair<int, int>> ranking(2 * n); 
	for (int i = 0; i < 2 * n; ++i) { ranking[i] = {i, 0}; }

	for (int i = 0; i < m; ++i) { 
		for (int k = 1; k <= n; ++k) { 
			pair<int, int> p1 = ranking[2 * k - 1 - 1];
			pair<int, int> p2 = ranking[2 * k - 1];
			int ret = battle(p1.first, p2.first, i, A);
			if (ret == -1) { continue; }
			if (ret == p1.first) { ranking[2 * k - 1 - 1].second++; }
			if (ret == p2.first) { ranking[2 * k - 1].second++; }
		}
		sort(ranking.begin(), ranking.end(), rank_sort);
	}

	for (int i = 0; i < 2 * n; ++i) { cout << ranking[i].first + 1 << endl; }

	return 0;
}
