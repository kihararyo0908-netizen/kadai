#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand((unsigned)time(nullptr));
	int answer = rand() % 10 + 1;
	int guess;
	cout << "1～10の数をあててね!\n";

	while (true) {
		cout << "入力: ";
		cin >> guess;

		if (guess < answer) {
			cout << "入力された数値よりも大きい！\n";
		}
		else if (guess > answer) {
			cout << "入力された数値よりも小さい！\n";
		}
		else {
			cout << "正解！おめでとう！\n";
			break;
		}
	}
	return 0;
}