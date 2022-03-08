#include <iostream>


int main() {

	int A, B, C, X;
	int counter = 0;
	std::cin >> A >> B >> C >> X;
	counter = 0;
	for (int a = 0; a <= A; ++a) {
		for (int b = 0; b <= B; ++b) {
			for (int c = 0; c <= C; ++c) {
				int total = 500 * a + 100 * b + 50 * c;
				if (total == X) { ++counter; }
			}
		}
	}
	std::cout << counter << std::endl;

	return 0;
}


