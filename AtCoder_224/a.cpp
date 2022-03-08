#include <bits/stdc++.h>
using namespace std;

int main() { 
	string s;
	cin >> s;

	if (s[s.size()-1] == 'r' && s[s.size()-2] == 'e') { cout << "er" << endl; }
	else if (s[s.size()-1] == 't' && s[s.size()-2] == 's') { cout << "ist" << endl; }

	return 0;
}
