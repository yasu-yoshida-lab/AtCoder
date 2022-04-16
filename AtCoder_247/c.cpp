#include <bits/stdc++.h>
using namespace std;

void solve(int n) { 
	if (n == 1) { cout << 1 << " "; }
	else { 
		solve(n - 1); 
		cout << n << " ";
		solve(n - 1); 
	}
}

int main() {
	int n; cin >> n;
	solve(n);
	cout << endl; 
}
