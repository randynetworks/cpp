#include <iostream>

using namespace std;

int main() {
	// if else.. if
	int a;

	cout << "Masukan angka anda: ";
	cin >> a;

	if (a == 1) {
		cout << "angka yang anda masukan adalah	1" << endl;
	}
	else if (a == 2) {
		cout << "angka yang anda masukan adalah 2" << endl;
	}
	else if (a == 3) {
		cout << "angka yang anda masukan adalah 3" << endl;
	}
	else {
		cout << "angka anda bukan 1, 2, ataupun 3" << endl;
	}

}