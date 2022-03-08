#include <iostream>
#include <set>

int main() {

	int N = 0;
	int d[110] = { 0 };

	std::cin >> N;
	for (int i = 0; i < N; ++i) { std::cin >> d[i]; }

	std::set<int> values;
	for (int i = 0; i < N; ++i) { values.insert(d[i]); }

	std::cout << values.size() << std::endl;

	return 0;
}
