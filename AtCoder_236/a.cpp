#include <iostream>
#include <string>
using namespace std;

int main() {
	string S; 
	cin >> S;
	int a, b;
	cin >> a >> b;
	
	swap(S[a-1], S[b-1]);

	cout << S << endl;

	return 0;
}

