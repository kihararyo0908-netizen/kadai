#include <iostream>
using namespace std;

int main() {
	int x;
	cout << "整数を入力";
	cin >> x;

	int abs;
	if (x < 0) {
		abs = -x;
	}
	else {
		abs = x;
	}
	cout << "絶対値" << abs << endl;
	return 0;
}