#include <iostream>
using namespace std;

int main() {
	char str[100];
	char enc[100];
	cout << "文字列を入力";
	cin >> str;

	int i = 0;
	while (str[i]) {
		enc[i] = str[i] + 2;
		i++;
	}
	enc[i] = '\0';

	int len = i;
	for (int j = 0; j < len / 2; j++) {
		char temp = enc[j];
		enc[j] = enc[len - 1 - j];
		enc[len - 1 - j] = temp;
	}
	cout << "暗号化結果" << enc << endl;
	return 0;
}