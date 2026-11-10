#include <iostream>
using namespace std;

int* bubbleSort(int* arr, int size);

int main() {
	int data[] = { 5, 3, 8, 4, 2 };
	int size = sizeof(data) / sizeof(data[0]);

	bubbleSort(data, size);

	for (int i = 0; i < size; i++) {
		cout << data[i] << " ";
	}
	cout << endl;
	return 0;
}

// バブルソートを行い、配列の先頭アドレスを返す
int* bubbleSort(int* arr, int size) {
	// 配列を繰り返し比較
	for (int i = 0; i < size - 1; i++) {
		// 隣同士を比較
		for (int j = 0; j < size - 1 - i; j++) {
			// 左の値が大きければ交換
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return arr;
}