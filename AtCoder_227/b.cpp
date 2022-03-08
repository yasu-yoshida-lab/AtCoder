#include <bits/stdc++.h>
using namespace std;

int calc(int a, int b) {
	return 4 * a * b + 3 * a + 3 * b;
}

bool comp(int val) { 
	for (int a = 1; a <= val; ++a) { 
		for (int b = 1; b <= val; ++b) { 
			if (val == calc(a, b)) { return true; }
		}
	}
	return false;
}


int main() {
	int n; 
	cin >> n;
	
	vector<int> s(n);
	for (auto &val : s) { cin >> val; }

	int ans = 0;
	for (auto val : s) {
		if (!comp(val)) { ans++; }
	}

	cout << ans << endl;


	return 0;
}
