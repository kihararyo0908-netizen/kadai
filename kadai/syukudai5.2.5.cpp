#include <iostream>
using namespace std;

int getSign(int x) {
	if (x > 0) {
		return 1;
	}
	else if (x < 0) {
		return -1;
	}
	else {
		return 0;
	}
}
int main() {
	int a;
	cout << "整数を入力 ";
	cin >> a;

	int sign = getSign(a);
	cout << "符号 " << sign << endl;
	return 0;
}