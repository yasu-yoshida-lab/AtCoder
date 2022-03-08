#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int H[100010];
	for (int i = 0; i < N; ++i) { cin >> H[i]; };

	int ans = 0;
	while(ans+1 < N && H[ans] < H[ans+1]) { ans++; }

	cout << H[ans] << endl;

	return 0;
}
