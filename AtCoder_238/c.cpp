#include <bits/stdc++.h>
#define mod 998244353
#define inv2 499122177
using namespace std;

long long triangular_number(long long x) { 
	x %= mod;
	long long res = x;
	res *= (x + 1); 
	res %= mod;
	res *= inv2; 
	res %= mod;
	return res;
}

int main() { 
	long long n;
	cin >> n;

	long long res = 0;
	long long p10 = 10;

	for (int dg = 1; dg <= 18; ++dg) { 
		long long l = p10 / 10;
		long long r = min(n, p10 - 1);
		if (l <= r) { 
			res += triangular_number(r - l + 1); 
			res %= mod;
		}
		p10 *= 10;
	}

	cout << res << endl;
	return 0;
}
