#include <iostream>
using namespace std;

int main() {
	double a, b;

	cout << "1つ目の実数を入力 ";
	cin >> a;

	cout << "２つ目の実数を入力 ";
	cin >> b;

	double sum = a + b;
	double average = sum / 2;

	cout << "和; " << sum << endl;
	cout << "平均; " << average << endl;
	return 0;
}