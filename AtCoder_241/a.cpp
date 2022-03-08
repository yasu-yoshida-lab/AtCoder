#include <bits/stdc++.h>
using namespace std;

int main() { 
	vector<int> a(10);
	for (auto & val : a) { cin >> val; }

	cout << a.at(a.at(a.at(0))) << endl; 

	return 0;
}
