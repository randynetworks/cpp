#include <iostream>
#include <array>

using namespace std;

int main() {
	//deklarasi array menggunakan standard library Array

	int nilai[5];               

	//untuk menampilkan array menggunakan for
	for (int i = 0; i <= 4; i++) {
		nilai[i] = i;
		cout << "Nilai [" << i << "]= " << nilai[i] << ", Address nya adalah = " << &nilai[i] << endl;
	}
	cout << endl;
	//ukuran array
	cout << "ukuran : " << nilai.size() << endl;
	// address awal dari sebuah array
	cout << "Address awal : " << nilai.begin() << endl;
	// address akhir dari sebuah array
	cout << "Address akhir : " << nilai.end() << endl;
	//nilai dengan index
	cout << "Nilai Indeks ke 2 : " << nilai.at(2) << endl;
}