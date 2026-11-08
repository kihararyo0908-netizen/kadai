#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Array(int* parr, int arrSize);

int main() {
	int array[10];
	srand(time(0));
	Array(array, 10);
	for (int i = 0; i < 10; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	return 0;
}
void Array(int* parr, int arrSize) {
	for (int i = 0; i < arrSize; i++) {
		parr[i] = rand() % 100 + 1;
	}
}