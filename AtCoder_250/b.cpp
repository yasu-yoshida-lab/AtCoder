#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() 
{
	ll n, w; cin >> n >> w;
	vector<ll> a(n);
	for (auto & val : a) { cin >> val; }

	vector<ll> flag(w + 1); 

	for (int i = 0; i < n; ++i) { 
		ll s = a[i]; 
		if (s <= w) { flag[s] = 1; }
	}

	for (int i = 0; i < n; ++i) { 
		for (int j = i + 1; j < n; ++j) { 
			ll s = a[i] + a[j]; 
			if (s <= w) { flag[s] = 1; }
		}
	}

	for (int i = 0; i < n; ++i) { 
		for (int j = i + 1; j < n; ++j) { 
			for (int k = j + 1; k < n; ++k) { 
				ll s = a[i] + a[j] + a[k]; 
				if (s <= w) { flag[s] = 1; }
			}
		}
	}

	int ans = 0; 
	for (int i = 0; i <= w; ++i) { ans += flag[i]; }
	cout << ans << endl;

	return 0;
}
