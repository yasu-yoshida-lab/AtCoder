#include <bits/stdc++.h>
using namespace std;

int main() { 
	int n;
	cin >> n;

	vector<int> v(n + 1, 0);
	for (int i = 1; i <= n - 1; ++i) { 
		int a, b;
		cin >> a >> b;
		v[a]++;
		v[b]++;
	}

	for (int i = 1; i <= n; ++i) {  
		if (v[i]  == n - 1) { 
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;


	return 0;
}
