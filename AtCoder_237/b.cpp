#include <iostream>
using namespace std;

int main() { 
	int H, W;
	cin >> H >> W;
	
	int a[H][W] = { 0 };
	for (int i = 0; i < H; ++i) { for (int j = 0; j < W; ++j) { cin >> a[i][j]; } } 
	int b[W][H] = { 0 };
	for (int i = 0; i < H; ++i) { for (int j = 0; j < W; ++j) { b[j][i] = a[i][j]; } } 
	
	for (int i = 0; i < W; ++i) { for (int j = 0; j < H; ++j) { cout << b[i][j] << " "; } cout << endl; }

	return 0;
}

