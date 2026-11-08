#include <iostream>
using namespace std;

int main() {
	int x;
	int count = 0;

	while (count < 5) {
		cin >> x;

		if (x > 0) {
			cout << x << endl;
			continue;
		}
			cout << "正の整数を入力" << endl;
			count++;
	}
	return 0;
}