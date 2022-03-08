#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; ++i) 
using namespace std;


int main() { 
	int n, k;
	cin >> n >> k;
	vector<int> p(n);
	rep(i, n) { cin >> p[i]; }
	priority_queue<int, vector<int>, greater<int>> que;
	rep(i, k) { que.push(p[i]); }
	rep(i, k) { cout << que.top() << endl; }
	cout << que.top() << endl;
	for (int i = k; i < n; ++i) { 
		if (que.top() < p[i]) { 
			que.pop();
			que.push(p[i]);
		}
		cout << que.top() << endl;
	}
	return 0;
}
