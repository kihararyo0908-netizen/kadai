#include <iostream>
#include <string>
using namespace std;

int main() {
	string text = "Hosaka";
	for (char c : text) {
		cout << c << " : " << (int)c << endl;
	}
	return 0;
}