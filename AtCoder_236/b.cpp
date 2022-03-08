#include <iostream>
using namespace std;

int main() {
	int a = 0;
	int N = 0;
	cin >> N;

	int count[N+1] = { 0 };
	for (int i = 0; i < 4 * N - 1; ++i) {
		cin >> a;
		count[a] += 1;
	}

	for (int i = 1; i <= N; ++i) {
		if (count[i] == 3) { cout << i << endl; }
	}

	return 0;
}
