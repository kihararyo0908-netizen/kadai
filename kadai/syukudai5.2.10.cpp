#include <iostream>
using namespace std;

int main() {
	int x, y, z;

	cout << "1つ目の整数";
	cin >> x;

	cout << "2つ目の整数";
	cin >> y;

	cout << "3つ目の整数";
	cin >> z;

	int minValue = x;

	if (y < minValue) {
		minValue = y;
	}
	if (z < minValue) {
		minValue = z;
	}
	cout << "最小値" << minValue << endl;
	return 0;
}