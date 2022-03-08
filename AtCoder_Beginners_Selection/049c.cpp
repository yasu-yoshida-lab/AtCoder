#include <iostream>
#include <algorithm>
#include <string>

std::string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
	std::string S;
	std::cin >> S;
	
	std::reverse(S.begin(), S.end());
	for (int i = 0; i < 4; ++i) { std::reverse(divide[i].begin(), divide[i].end()); }

	bool can = true;
	for (int i = 0; i < S.size();) {
		bool can2 = false; 
		for (int j = 0; j < 4; ++j) {
			std::string d = divide[j]; 
			if (S.substr(i, d.size()) == d) { 
				can2 = true;
				i += d.size();
			}
		}
		if(!can2) { 
			can = false;
			break; 
		}
	}

	if (can) { std::cout << "YES" << std::endl; }
	else { std::cout << "NO" << std::endl; }
	return 0;
}
