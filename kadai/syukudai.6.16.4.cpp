#include <iostream>
using namespace std;

int main() {
	char name[] = "Ryo";
	int i = 0;
	while (name[i]) {
		cout << name[i] << endl;
		i++;
	}
	return 0;
}