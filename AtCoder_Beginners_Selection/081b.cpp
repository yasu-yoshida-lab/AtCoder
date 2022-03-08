#include <iostream>

int main() {
	int n = 0;
	int counter = 0;
	int a[201] = { 0 };
	std::cin >> n;

	for (int i = 0; i < n; ++i) { std::cin >> a[i]; }
	bool odd = false;
	while(!odd) {
		for (int i = 0; i < n; ++i) {
			if (a[i] % 2 == 1) { odd = true; }
		}
		if (odd) { break; }
		for (int i = 0; i < n; ++i ) { a[i] /= 2; } 
		++counter;
	}
	std::cout << counter << std::endl;

	return 0;
}
