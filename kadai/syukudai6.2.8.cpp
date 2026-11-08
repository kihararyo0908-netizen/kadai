#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

int sum(int x, int y, int& r) {
	r = x + y;
}
void Show(int x, int y) {
	int r;
	sum( x, y, r);

	char add[50];
	sprintf(add, "sum(%d, %d) = %d", x, y, sum(x, y, r));
	cout << add << endl;
}

int main() {
	Show(1, 2);
}