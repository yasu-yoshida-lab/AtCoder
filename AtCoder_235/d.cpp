#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <map>
#include <queue>
using namespace std;
const int M = 1000000;
const int INF = 1001001001;


int main() {
	int a, N;
	cin >> a >> N;

	queue<int> que;
	vector<int> dist(M + 1, INF);

	auto push = [&](int v, int d) { 
		if(dist.at(v) != INF) return;
		dist.at(v) = d;
		que.push(v);
	};

	push(1, 0);
	int n = to_string(N).length();

	while (!que.empty()) { 
		int v = que.front();
		que.pop();
		int d = dist.at(v);

		if ((long long) a * v < M) push(a * v, d + 1);
		if (v > 10 && v % 10 != 0) { 
			string s = to_string(v); 
			int len = s.length();
			rotate(s.begin(), s.end() - 1, s.end());
			int w = stoi(s);
			push(w, d + 1);
		}
	}

	if (dist.at(N) == INF) { cout << -1 << endl; }
	else { cout << dist.at(N) << endl; }

	return 0;
}
