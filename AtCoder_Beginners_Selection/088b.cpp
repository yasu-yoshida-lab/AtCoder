#include <iostream>
#include <algorithm>

int main() { 
	int N = 0;
	int arr[110] = { 0 };
	std::cin >> N;
	for (int i = 0; i < N; ++i) { std::cin >> arr[i]; }
	std::sort(arr, arr + N, std::greater<int>());
	int al = 0;
	int bo = 0;
	for (int i = 0; i < N; ++i) {
		if (i % 2 == 0) { al += arr[i]; }
		else { bo += arr[i]; }
	}

	std::cout << al - bo << std::endl;

	return 0;
}

