#include <iostream>
using namespace std;

int main() {
	int a = 5;

	// pointer
	int* aPtr = nullptr;
	aPtr = &a;

	// int a mempunyai nilai dan adress ( alamat )

	cout << "Nilai dari a: " << a << endl;
	cout << "Alamat dari a: " << aPtr << endl;

	// deferencing = memanggili data dari sebuah pointer
	a = 10;
	cout << "Mengambil nilai dari pointer aPtr : " << *aPtr << endl;

	cin.get();
	return 0;
}
