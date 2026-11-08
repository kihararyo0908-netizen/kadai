#include <iostream>
using namespace std;

int main() {
	int x;

	cout << "整数を入力";
	cin >> x;

	if (x < 0) {
		cout << -x << endl;
	}
	else {
		cout << x << endl;
	}
	return 0;
}