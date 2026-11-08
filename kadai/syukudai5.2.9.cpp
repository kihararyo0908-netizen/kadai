#include <iostream>
using namespace std;

double maxf(double a, double b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
int main() {
	double x, y;

	cout << "1つ目の実数";
	cin >> x;

	cout << "2つ目の実数";
	cin >> y;

	double bigger = maxf(x, y);
	cout << "大きい値" << bigger << endl;
	return 0;
}