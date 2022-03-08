#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() { 
	int N, M;
	cin >> N >> M;

	vector<string> s(N), t(M);
	for (string& x : s) { cin >> x; };
	for (string& x : t) { cin >> x; };

	set<string> overrap(t.begin(), t.end());
	for (const string& x : s) { cout << (overrap.count(x) ? "Yes" : "No") << endl; }

	return 0;
}
