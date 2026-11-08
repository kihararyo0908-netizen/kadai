#include <iostream>
using namespace std;

int main() {
	int a[5] = { 1, 2, 3, 4, 5 };

	int size = sizeof(a) / sizeof(a[0]);
	cout << "配列 a の要素数は" << size << "個です" << endl;
	return 0;
}