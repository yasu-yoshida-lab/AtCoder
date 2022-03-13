#include <bits/stdc++.h>
using namespace std;

int main() { 
	int n; cin >> n;

	if (1 <= n && n <= 125) { cout << 4 << endl; }
	if (126 <= n && n <= 211) { cout << 6 << endl; }
	if (212 <= n && n <= 214) { cout << 8 << endl; }

	return 0;
}
