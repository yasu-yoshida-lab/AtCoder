#include <bits/stdc++.h>
using namespace std;

int main() { 

	pair<int, int> p; p = make_pair(0, 0);
	vector<pair<int, int>> add_p; 
	add_p.push_back(make_pair(1, 0));
	add_p.push_back(make_pair(0, -1));
	add_p.push_back(make_pair(-1, 0));
	add_p.push_back(make_pair(0, 1));

	int n; cin >> n;
	int direction = 0;
	for (int i = 0; i < n; ++i){ 
		char c; cin >> c;
		if (c == 'S') { 
			p.first = p.first + add_p[direction].first;
			p.second = p.second + add_p[direction].second;
		}
		if (c == 'R') { direction++;  }
		if (direction == 4) { direction = 0; }
	}

	printf("%d %d\n", p.first, p.second);

	return 0;
}
