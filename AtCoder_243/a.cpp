#include <bits/stdc++.h>
using namespace std;

int main() {
	int v, a, b, c;
	cin >> v >> a >> b >> c;

	do {
		if (v - a < 0) { cout << "F" << endl; return 0; }
		v = v - a;
		if (v - b < 0) { cout << "M" << endl; return 0; }
		v = v - b;
		if (v - c < 0) { cout << "T" << endl; return 0; }
		v = v - c;
	} while(v >= 0);

	return 0;
}
