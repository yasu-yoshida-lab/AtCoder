#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; ++i) 
using namespace std;

int main() { 
	int n;
	cin >> n;

	vector<int> x(n), y(n);

	rep(i, n) {
		cin >> x[i] >> y[i];
	}

	double ans = 0;
	
	rep(i, n) { 
		rep(j, n) {
			double dist_x = x[i] - x[j];
			double dist_y = y[i] - y[j];
			ans = max(ans, sqrt(dist_x * dist_x + dist_y * dist_y));
		}
	}

	cout << fixed << setprecision(10) << ans << endl;


	return 0;
}
