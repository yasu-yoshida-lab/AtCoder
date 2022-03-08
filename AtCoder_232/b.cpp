#include <bits/stdc++.h>
#define MAX 26
using namespace std;

int main() { 
	string s;
	string t;
	cin >> s >> t;

	int k = (t[0] - s[0] + MAX) % MAX;

	string s2 = s;
	for (int i = 0; i < (int)s.size(); ++i) { 
		s2[i] = ((s[i] - 'a') + k) % 26 + 'a';
	}

	if (s2 == t) { cout << "Yes" << endl; }
	else { cout << "No" << endl; } 

	return 0;
}

