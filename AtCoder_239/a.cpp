#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() { 
	ll h; 
	cin >> h;
	double ans = sqrt(h * (12800000 + h));

	printf("%.8f\n", ans);

	return 0;
}
