#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x;

	switch (x) {
	case 1:
		cout << "グー" << endl;
		break;

	case 2:
		cout << "チョキ" << endl;
		break;

	case 3:
		cout << "パー" << endl;
		break;

	default:
		cout << "1～3を入力してください" << endl;
		break;
	}
	return 0;
}