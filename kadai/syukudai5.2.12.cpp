#include <iostream>
using namespace std;

int main() {
	int age;

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "回目の年齢";
		cin >> age;

		if (age < 0) {
			cout << "そんな年齢ないっす" << endl;
		}
		else {
			cout << "あなたの年齢は" << age << "歳です" << endl;
		}
	}
	return 0;
}