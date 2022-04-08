#include <bits/stdc++.h>
using namespace std;

int main() { 
	int pa, pb; cin >> pa >> pb;
	auto d = sqrt(pow(pa, 2.0) + pow(pb, 2.0));

	printf("%.6lf %.6lf\n", pa / d, pb / d);
}
