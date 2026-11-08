#include <iostream>
using namespace std;

int main() {
	int x;

	cout << "正の整数";
	cin >> x;

	if (x <= 0) {
		cout << "正でない値" << endl;
	}
	else if (x % 3 == 0) {
		cout << "その値は3で割りせれます" << endl;
	}
	else {
		cout << "その値を３で割った余りは" << (x % 3) << "です" << endl;
	}
	return 0;
}