#include <bits/stdc++.h>
using namespace std;

int main() { 
	string s, t;
	cin >> s >> t;

	if (s == t) { 
		cout << "Yes" << endl; 
		return 0;
	}

	if (s != t) { 
		for (int i = 0; i < (int)s.size() - 1; ++i) { 
			swap(s[i], s[i + 1]);
			if (s == t) { 
				cout << "Yes" << endl; 
				return 0;
			}
			swap(s[i], s[i + 1]);
		}
	}

	cout << "No" << endl;

	return 0;
}
