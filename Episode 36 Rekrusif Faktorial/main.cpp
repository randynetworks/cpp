#include <iostream>

using namespace std;

int faktorial(int n);

int main() {
	int angka, hasil;
	cout << "Masukan Faktorial : ";
	cin >> angka;

	hasil = faktorial(angka);
	cout << "\nHasil Faktorial : " << hasil << endl;
}

int faktorial(int n) {
	if (n <= 1) {
		cout << n;
		return n;
	}else {
		cout << n << "*";
		return n * faktorial(n - 1);
	}
	
}