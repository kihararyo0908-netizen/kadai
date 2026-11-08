#include <iostream>
using namespace std;

void dispArray10(int* a);

int main() {
	int array[10];
	for (int i = 0; i < 10; i++) {
		array[i] = i * 10;
	}
	dispArray10(array);
	return 0;
}

void dispArray10(int* a) {
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}