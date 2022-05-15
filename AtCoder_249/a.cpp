#include <bits/stdc++.h>
using namespace std;

int main() 
{ 
	int a, b, c, d, e, f, x;
	cin >> a >> b >> c >> d >> e >> f >> x;
	int d_t = 0, d_a = 0;

	for (int i = 0; i < x; ++i) { 
		if (i % (a + c) < a) { d_t += b; }
		if (i % (d + f) < d) { d_a += e; } 
	} 

	if (d_t > d_a) { cout << "Takahashi" << endl; }
	if (d_t < d_a) { cout << "Aoki" << endl; }
	if (d_t == d_a) { cout << "Draw" << endl; }

	return 0;
}
