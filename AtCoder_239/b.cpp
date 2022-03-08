#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() { 
	ll x;
	cin >> x;

	if (x < 0 and x % 10 != 0) { cout << x / 10 - 1 << endl; }
	else { cout << x / 10 << endl; }

	/* another answer */
	// (x % 10 < 0) is 'false' : 0
	// (x % 10 < 0) is 'true' : 1
	cout << x / 10 - (x % 10 < 0) << endl;
	


	return 0;
}
