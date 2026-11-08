#include <iostream>
using namespace std;

int main() {
	int x;

	while (true) {
		cout << "整数を入力（－１で終了）";
		cin >> x;

		if (x == -1) {
			break;
		}
		cout << "入力された値" << x << endl;
	}
	return 0;
}