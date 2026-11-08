#include <iostream>
using namespace std;

int min3(int a, int b, int c);

int main() {
	int x, y, z;
	cout << "3つの整数";
	cin >> x >> y >> z;

	int mum = min3(x, y, z);
	cout << "最小値" << mum << endl;
	return 0;
}
int min3(int a, int b, int c) {
	int min = a;
	if (b < min) {
		min = b;
	}
	if (c < min) {
		min = c;
	}
	return min;
}