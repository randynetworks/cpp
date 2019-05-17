#include <iostream>

using namespace std;

int main() {
	string nama, jurusan, kelas;
	int npm, telp;

	cout << "======  Data Mahasiswa =======" << endl;
	cout << "Masukan Nama	  : ";
	cin >> nama;
	cout << "Masukan NPM	  : ";
	cin >> npm;
	cout << "Masukan Jurusan   : ";
	cin >> jurusan;
	cout << "Masukan Kelas    : ";
	cin >> kelas;
	cout << "Masukan No. Telp : ";
	cin >> telp;
	cout << endl;
	cout << "======  Hasil =======" << endl;
	cout << "Nama Kamu adalah " << nama << endl;
	cout << "NPM kamu  adalah " << npm << endl;
	cout << "Jurusan Kamu adalah " << jurusan << endl;
	cout << "Kelas Kamu adalah " << kelas << endl;
	cout << "Nomor Telp Kamu adalah " << telp << endl;
}