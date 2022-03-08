#include <bits/stdc++.h>
using namespace std;

int main() { 
	string t, s;
	for (int i = 0; i < 100000; ++i) { t += "oxx"; }
	cin >> s;

	if (t.find(s) != string::npos) { cout << "Yes" << endl; }
	else { cout << "No" << endl; }

	return 0;
}
