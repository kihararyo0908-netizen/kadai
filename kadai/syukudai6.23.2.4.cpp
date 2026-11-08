#include <iostream>
using namespace std;

void showStr(char s[]);

int main() {
	char str[10] = "kihara";
	showStr(str);
	return 0;
}
void showStr(char s[]) {
	for (int i = 0; s[i] != '\0'; i++) {
		cout << s[i];
	}
	cout << endl;
}