#include <iostream>
using namespace std;

int sum(int x, int y);

int main() {
	cout << sum(1, 2) << endl;
	return 0;
}
int sum(int x, int y) {
	return x + y;
}