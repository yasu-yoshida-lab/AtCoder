#include <bits/stdc++.h>
using namespace std;

int main() { 
	int n, k;
	cin >> n >> k;

	vector<int> p(n); 

	for (int i = 0; i < n; ++i) { 
		int a, b, c;
		cin >> a >> b >> c; 
		p[i] = a + b + c;
	}

	vector<int> q = p;
	sort(q.begin(), q.end(), greater<>());
	for (auto x : p) { cout << (x + 300 >= q[k-1] ? "Yes" : "No") << endl; } 

	return 0;
}
