#include <bits/stdc++.h>
using namespace std;

int ceil(int a, int b) { 
	return (a + b - 1) / b;
}

int main() { 
	int x, y;
	int ans = 0;
	cin >> x >> y;

	if (x >= y) { ans = 0;}
	else { ans = ceil(y - x, 10); }
	cout << ans << endl;

	return 0;
}
