#include <bits/stdc++.h>
using namespace std;

int main() { 
	vector<int> px(3), py(3);

	for (int i = 0; i < 3; ++i) { 
		int x, y; cin >> x >> y;
		px[i] = x;
		py[i] = y;
	}

	printf("%d %d\n", (px[0] ^ px[1] ^ px[2]), (py[0] ^ py[1] ^ py[2]));
}
