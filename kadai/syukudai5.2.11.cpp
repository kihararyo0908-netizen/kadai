#include <iostream>
using namespace std;

int main() {
	int x, y;

	cout << "1つ目の整数";
	cin >> x;

	cout << "2つ目の整数";
	cin >> y;

	if (x < y) {
		int temp = x;
		x = y;
		y = temp;
	}

	cout << "降順" << x << "," << y << endl;
	return 0;
}