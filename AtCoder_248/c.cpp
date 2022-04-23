#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr ll mod = 998244353;

int main() { 
	int n, m, K; cin >> n >> m >> K;

	ll dp[55][2505];

	for (int i = 0; i < n; i++) { 
		for (int j = 0; j < K; ++j) {
			for (int k = 1; k <= m; ++k) { 
				if (j - k >= 0) { dp[i][j] += dp[i - 1][j - k]; }
				dp[i][j] %= mod;
			}
		}
	}

	ll ans = 0;
	for (ll i = 1; i <= K; ++i) { 
		ans += dp[n][i];
		ans %= mod; 
	}
	cout << ans << endl; 

}
