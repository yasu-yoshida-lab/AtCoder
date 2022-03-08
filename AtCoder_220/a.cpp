#include <bits/stdc++.h>
using namespace std;

int main() { 
	int a, b, c;
	cin >> a >> b >> c;

	while (c < a) { c += c; }

	if (c <= b) { cout << c << endl; }
	else { cout << -1 << endl; }

	return 0; 
}
