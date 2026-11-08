#include <iostream>
using namespace std;

int max(int x, int y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}
int main() {
	int a, b;

	cout << "１つ目の整数";
	cin >> a;

	cout << "２つ目の整数";
	cin >> b;

	int bigger = max(a, b);
	cout << "大きい値" << bigger << endl;
	return 0;
}