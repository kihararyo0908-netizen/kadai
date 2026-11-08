#include <iostream>
using namespace std;

void sumSub(int x, int y, int& add, int& sub);

int main() {
	int a, b;
	sumSub(1, 2, a, b);
	cout << "足し算" << a << endl;
	cout << "引き算" << b << endl;
	return 0;
}

void sumSub(int x, int y, int& add, int& sub) {
	add = x + y;
	sub = x - y;
}