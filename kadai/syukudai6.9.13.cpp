#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char x[100];
	char y[100];
	cout << "1つ目の文字列を入力";
	cin >> x;

	cout << "2つ目の文字列を入力";
	cin >> y;

	if (strcmp(x, y) == 0) {
		cout << "一致しています" << endl;
	}
	else {
		cout << "一致していません" << endl;
	}
	return 0;
}