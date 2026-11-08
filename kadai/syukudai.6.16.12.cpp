#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str1[100];
	char str2[100];
	char result[200];
	cout << "１つ目の文字列";
	cin >> str1;
	cout << "２つ目の文字列";
	cin >> str2;

	strcpy(result, str1);
	strcat(result, str2);
	cout << "連結結果" << result << endl;
	return 0;
}