#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
	ll N;
	cin >> N;

	ll num = pow(2, 31);

	if (-num <= N && N < num) { cout << "Yes" << endl; }
	else { cout << "No" << endl; }

	return 0;
}
