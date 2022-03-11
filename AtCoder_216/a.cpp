#include <bits/stdc++.h>
using namespace std;

int main() {
	double n;
	cin >> n;

	int x = (int) n;
	int y = (int) (n * 10) % 10;

	if (0 <= y && y <= 2) { printf("%d-\n", x); }
	if (3 <= y && y <= 6) { printf("%d\n", x); }
	if (7 <= y && y <= 9) { printf("%d+\n", x); }

	return 0;
}
