#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, x;
	cin >> a >> b >> c >> x;

	double ans = 0.0;
	if (x <= a) { ans = 1.0; }
	else if (x > b) { ans = 0.0; }
	else { ans = (double) c / (b - a); }

	printf("%.10f\n", ans);

	return 0;
}
