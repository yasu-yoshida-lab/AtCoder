#include <iostream>

int main() {
	int N;
	int t[110000], x[110000], y[110000];
	
	std::cin >> N;
	t[0] = x[0] = y[0] = 0;
	for (int i = 0; i < N; ++i) { std::cin >> t[i+1] >> x[i+1] >> y[i+1]; }

	bool can = true;
	for (int i = 0; i < N; ++i) {
		int dt = t[i+1] - t[i];
		int dist = std::abs(x[i+1] - x[i]) + std::abs(y[i+1] - y[i]);
		if (dt < dist) { can = false; }
		if (dist % 2 != dt % 2) { can = false; }
	}

	if (can) { std::cout << "Yes" << std::endl; }
	else { std::cout << "No" << std::endl; } 
	return 0;
}
