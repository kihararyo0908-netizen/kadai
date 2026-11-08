#include <iostream>
using namespace std;

int sum3(int a, int b, int c);

int main() {
	int add = sum3(1, 2, 3);
	cout << "合計は " << add << endl;
	return 0;
}

int sum3(int a, int b, int c) {
	return a + b + c;
}