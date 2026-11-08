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
		cout << "入力";
		cin >> guess;
		if (guess == answer) {
			break;
		}
	}
	return 0;
}