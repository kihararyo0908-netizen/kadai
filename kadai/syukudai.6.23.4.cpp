#include <iostream>
using namespace std;

void zero(int* a);

int main() {
	int array[5]{ 1, 2, 3, 4, 5 };
	zero(array);
	for (int i = 0; i < 5; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	return 0;	
}

void zero(int* a) {
	for (int i = 0; i < 5; i++) {
		a[i] = 0;
	}
}