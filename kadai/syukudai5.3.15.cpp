#include <iostream>
using namespace std;

int main() {
	int score[5];
	int total = 0;
	double average = 0.0;

	for (int i = 0; i < 5; ++i) {
		cout << i + 1 << "つ目の点数を入力してください";
		cin >> score[i];
		total += score[i];
	}

	average = total / 5.0;
	cout << "平均点 = " << average << endl;
	return 0;
}
