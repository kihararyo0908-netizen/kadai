#include <iostream>
using namespace std;

int main() {
	int a[5] = { 1, 2, 3, 4, 5 };
	char s[7] = "kihara";

	cout << "アドレスa : " << a <<  endl
		<< "アドレスs : " <<  s << endl;
	
	cout << "アドレスa : " << &a[0] << endl
		<< "アドレスs : " << &s[0] << endl;
	return 0;
}