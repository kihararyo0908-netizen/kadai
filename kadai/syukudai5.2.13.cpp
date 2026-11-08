#include <iostream>
using namespace std;

//西暦を昭和に変換します。
//変な値が渡された場合は 0 を返します。
int WesternToShouwa(int western) {
	if (1926 <= western && western <= 1989) {
		return western - 1925;
	}
	else {
		return 0;
	}
}

int main() {
	int western;
	
	for (int i = 0; i < 10; i++) {
		cout << i + 1 << "回目の西暦を入力してください > " << flush;
		cin >> western;

		int shouwa = WesternToShouwa(western);

		if (shouwa == 0) {
			cout << "不正な西暦です" << endl;
		}
		else {
			cout << "昭和" << shouwa << "年です" << endl;
		}
	}
	return 0;
}