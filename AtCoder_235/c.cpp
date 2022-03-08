#include <iostream>
#include <vector>
#include <map>
using namespace std;


int main() {
	int N, Q;
	int x, k;

	cin >> N >> Q;

	map<int, vector<int>> m;
	for (int i = 0; i < N; ++i) { 
		int val;
		cin >> val;
		m[val].push_back(i+1);
	}

	vector<int> ans(Q);
	for (int i = 0; i < Q; ++i) {
		cin >> x >> k;
		if (m[x].size() < k) { ans[i] = -1; }
		else { ans[i] = m[x][k-1]; }
	}

	for (int i = 0; i < Q; ++i) { cout << ans[i] << endl; }

	return 0;
}
