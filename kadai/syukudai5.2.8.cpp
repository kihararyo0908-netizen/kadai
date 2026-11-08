#include <iostream>
using namespace std;

int main() {
	int score;

	cout << "点数を入力";
	cin >> score;

	if (score >= 80) {
		cout << "優" << endl;
	}
	else if (score >= 70) {
		cout << "良" << endl;
	}
	else if (score >= 60) {
		cout << "可" << endl;
	}
	else {
		cout << "不可" << endl;
	}
	return 0;
}