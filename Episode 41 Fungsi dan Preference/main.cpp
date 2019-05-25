#include <iostream>

using namespace std;

void fungsi(int &);
void kuadrat(int&);

int main() {
	int a = 5;
	cout << "address dari a adalah : " << &a << endl;
	cout << "Nilai dari a adalah : " << a << endl;

	// fungsi
	//fungsi(a);
	//kuadrat
	kuadrat(a);
	cout << "Nilai a: " << a << endl;
	cin.get();
	return 0;
}

void fungsi(int& b) {
	b = 10;
	cout << "Address dari b adalah : " << b << endl;
	cout << "Nilai dari b adalah : " << &b << endl;
}

void kuadrat(int& nilaiRef) {
	nilaiRef = nilaiRef * nilaiRef;
}