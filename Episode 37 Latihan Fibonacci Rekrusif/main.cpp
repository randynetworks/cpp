#include <iostream>
using namespace std;

int fibonacci(int n);
int main() {
	int angka, hasil;
	cout << "Masukan angka fibonacci : ";
	cin >> angka;
	hasil = fibonacci(angka);
	cout << "Hasil dari fibonacci adalah : ";
	cout << hasil;
}
int fibonacci(int n) {
	if ((n == 0) || (n == 1)){
		return n;
	}else{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
