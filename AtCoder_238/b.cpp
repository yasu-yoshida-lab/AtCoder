#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; ++i) 
using namespace std;

int main() { 
	int n;
	cin >> n;

	vector<bool> fl(360);
	rep(i, 360) { fl[i] = false; }
	fl[0] = true;
	int rad = 0;
	rep(i, n) { 
		int a = 0;
		cin >> a; 
		rad += a;
		rad %= 360;
		fl[rad] = true;
	}

	int res = 0, cur = 0;
	rep(i, 361) { 
		if (fl[i % 360]) {
			res = max(res, cur);
			cur = 0;
		}
		cur++;
	}
	cout << res << endl;

	return 0;
}
