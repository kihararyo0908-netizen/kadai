#include <iostream>
using namespace std;

// このファイル内だけで使える関数
static int mult(int x, int y);

int main() {

	// mult関数を呼び出して掛け算を行う
	int result = mult(10, 20);
	cout << result << endl;
	return 0;
}

// 掛け算を行う関数
static int mult(int x, int y) {
	return x * y;
}