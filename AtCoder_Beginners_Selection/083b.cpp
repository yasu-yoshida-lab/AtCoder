#include <iostream>

int main() {
	int N = 0;
	int A = 0;
	int B = 0;
	int res = 0;

	std::cin >> N >> A >> B;
	
	int sum = 0;
	for (int i = 0; i <= N; ++i) {
		sum = 0;
		for (int j = i; j != 0; j/=10) {
			sum += j % 10;
		}
		if (A <= sum && sum <= B) { res+=i; }
	}

	std::cout << res << std::endl;

	return 0;
}
