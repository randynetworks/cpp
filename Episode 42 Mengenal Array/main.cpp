#include <iostream>

using namespace std;

int main() {
	// membuat Array
	int nilai[5] = {1,2,3,4,5};

	cout << "Address nya adalah : " << &nilai[0] << ", Nilainya adalah : " << nilai[0] << endl;
	cout << "Address nya adalah : " << &nilai[1] << ", Nilainya adalah : " << nilai[1] << endl;
	cout << "Address nya adalah : " << &nilai[2] << ", Nilainya adalah : " << nilai[2] << endl;
	cout << "Address nya adalah : " << &nilai[3] << ", Nilainya adalah : " << nilai[3] << endl;
	cout << "Address nya adalah : " << &nilai[4] << ", Nilainya adalah : " << nilai[4] << endl;

	// menambahkan nilai lewat address menggunakan pointer
	int* ptr = nilai;
	*(ptr + 2) = 6;

	//biasa
	nilai[1] = 10;

	cout << endl;
	cout << "Address nya adalah : " << &nilai[0] << ", Nilainya adalah : " << nilai[0] << endl;
	cout << "Address nya adalah : " << &nilai[1] << ", Nilainya adalah : " << nilai[1] << endl;
	cout << "Address nya adalah : " << &nilai[2] << ", Nilainya adalah : " << nilai[2] << endl;
	cout << "Address nya adalah : " << &nilai[3] << ", Nilainya adalah : " << nilai[3] << endl;
	cout << "Address nya adalah : " << &nilai[4] << ", Nilainya adalah : " << nilai[4] << endl;


	//ukuran array
	cout << "Ukuran Array : " << sizeof(nilai) << " Byte" << endl;

	//untuk mengeluarkan jumlah member pada suatu array
	cout << "Jumlah member Array : " << sizeof(nilai) / sizeof(int) << endl;
	cin.get();
	return 0;
}

