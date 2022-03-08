#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() { 
	string n;
	cin >> n; 
	sort(n.begin(), n.end());

	int ans = 0;
	do { 
		for (int i = 1; i < n.size(); ++i) { 
			string left = "", right = "";
			for (int j = 0; j < i; ++j) { left += n[j]; }
			for (int j = i; j < n.size(); ++j) { right += n[j]; }
			if (left[0] != '0' && right[0] != '0') { 
				ans = max(ans, stoi(left) * stoi(right));
			}
		}
	} while (next_permutation(n.begin(), n.end()));

	cout << ans << endl;

	return 0;
}
