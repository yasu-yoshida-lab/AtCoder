#include <bits/stdc++.h>
using namespace std;

int main() { 
	int s, t; cin >> s >> t;

	int count = 0;
	for (int a = 0; a < 101; ++a) { 
		for (int b = 0; b < 101; ++b) { 
			for (int c = 0; c < 101; ++c) { 
				if (a + b + c <= s && a * b * c <= t) { count++; }
			}
		}
	}

	cout << count << endl;

	return 0;
}
