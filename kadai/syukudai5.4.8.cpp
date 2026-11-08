#include <iostream>
using namespace std;

int main() {
	int x;

	while (true) {
		cin >> x;

		if (x == -1) {
			break;
		}
		cout << x << endl;
	}
	return 0;
}