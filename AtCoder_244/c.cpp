#include <bits/stdc++.h>
using namespace std;

bool used[2005];

int main() { 
	int n; cin >> n;

	while (1) { 
		for (int i = 1; i <= 2 * n + 1; ++i) { 
			if (!used[i]) { 
				cout << i << endl; 
				used[i] = true; 
				break; 
			}
		}

		int res; cin >> res; 
		if (res == 0) { break; }
		used[res] = true; 
	}

	return 0;
}
