#include <iostream>
using namespace std;

int* selectionSort(int* arr, int size);

int main() {
	int data[] = { 5, 3, 9, 1, 4 };
	int size = sizeof(data) / sizeof(data[0]);

	selectionSort(data, size);

	for (int i = 0; i < size; i++) {
		cout << data[i] << " ";
	}
	cout << endl;
	return 0;
}

int* selectionSort(int* arr, int size) {

	// ソート開始位置を戦闘から順番にずらしていく
	for (int i = 0; i < size - 1; i++) {
		// 現在の位置を最小値の位置とする
		int minIndex = i;

		// 最小値を探す
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}

		// 最小値と現在位置を交換
		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}
	return arr;
}