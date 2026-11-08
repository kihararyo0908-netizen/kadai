#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;

	if (x < y) {
		int DescendingOrder = x;
		x = y;
		y = DescendingOrder;
	}
	cout << "降順" << x << "," << y << endl;
	return 0;
}