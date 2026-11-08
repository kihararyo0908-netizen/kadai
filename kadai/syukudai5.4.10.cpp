#include <iostream>
using namespace std;

int loopDispNumber(int times) {
	int x;
	for (int i = 0; i < times; ++i) {
		cin >> x;
		if (x == -1) {
			return 0;
		}
		cout << x << endl;
	}
	return 1;
}
int main() {
	int result = loopDispNumber(5);
	if (result == 0) {
		cout << "途中で終了しました" << endl;
	}
	else {
		cout << "最後まで表示しました" << endl;
	}
	return 0;
}