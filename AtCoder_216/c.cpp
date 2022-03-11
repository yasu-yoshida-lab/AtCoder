#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n;
	cin >> n;

	string ans = "";

	while (n > 0) { 
		if (n % 2) { ans += "A"; n--; }
		else { ans += "B"; n /= 2; }
	}
	reverse(ans.begin(), ans.end());

	cout << ans << endl;

	return 0; 
}
