#include <iostream>
using namespace std;

int main() {
	int x;
	int count = 0;
	cout << "整数を入力";
	cin >> x;
	for (int i = 1; i <= x; i++) {
		if (x % i == 0) {
			cout << i << " ";
			count++;
		}
	}
	cout << endl;
	cout << "約数の数" << count << endl;
	return 0;
}