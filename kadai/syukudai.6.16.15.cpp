#include <iostream>
using namespace std;

int main() {
	int x;
	int count = 0;
	cout << "正の整数を入力";
	cin >> x;
	while (x > 0) {
		x = x / 10;
		count++;
	}
	cout << "桁数" << count << endl;
	return 0;
}