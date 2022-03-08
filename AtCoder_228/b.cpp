#include <bits/stdc++.h>
using namespace std;

int main() { 
	int n, x;
	cin >> n >> x;

	vector<int> a(n);
	vector<bool> b(n);
	for (int i = 0; i < n; ++i) { cin >> a[i]; }
	for (int i = 0; i < n; ++i) { b[i] = false; }

	int i = x - 1;
	do { 
		b[i] = true; 
		i = a[i] - 1;;
	} while (!b[i]);

	int ans = 0; 
	for (int i = 0; i < n; ++i) { 
		if (b[i]) { ans++; } 
	}

	cout << ans << endl; 

	return 0;
}
