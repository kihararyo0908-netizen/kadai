#include <iostream>
using namespace std;

int main() {
	int score[5];
	int sum = 0;
	double avg;

	for (int i = 0; i < 5; ++i) {
		cout << i + 1 << "つ目の点数";
		cin >> score[i];
		sum += score[i];
	}
	avg = sum / 5.0;
	cout << "平均点 =" << avg << endl;
	return 0;
}