#include <bits/stdc++.h>
using namespace std;

int main() { 
	int n;
	cin >> n;

	set<pair<int, int>> s, t;

	char c;

	for (int i = 0; i < n; ++i) { 
		for (int j = 0; j < n; ++j) { 
			cin >> c;
			if (c == '#') s.insert(make_pair(i, j));
		}
	}

	for (int i = 0; i < n; ++i) { 
		for (int j = 0; j < n; ++j) { 
			cin >> c;
			if (c == '#') t.insert(make_pair(i, j));
		}
	}

	for (int i = 0; i < 4; ++i) { 
		pair<int, int> mins = *(s.begin());
		pair<int, int> mint = *(t.begin());
		set<pair<int, int>> ds, dt, tt;
		for (auto v : s) { ds.insert(make_pair(v.first - mins.first, v.second - mins.second)); }
		vector<pair<int, int>> memo;
		for (auto v : t) { 
			memo.push_back(v);
			dt.insert(make_pair(v.first - mint.first, v.second - mint.second)); 
		}
		if (ds == dt) {
			cout << "Yes" << endl;
			return 0;
		}
		for (auto v : memo) { t.erase(v); }
		for (auto v : dt) { 
			t.insert(make_pair(v.second, v.first*(-1)));
		}
	}

	cout << "No" << endl; 

	return 0;
}
