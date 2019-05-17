#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct NilaiMahasiswa {

	int kodeMTK;
	string NamaMTK;
	int Nilai;
}data[5];

int main() {
	int npm, ratarata, total, kode, nilai, n;
	string nama, kelas, program;
	
	cout << "REKAP NILAI MAHASISWA" << endl;
	cout << "NPM			: ";
	cin >> nama;
	cout << "KELAS			: ";
	cin >> kelas;
	cout << "PROGRAM STUDI	:";
	cin >> program;

	cout << "=============== DATA ================";
	cout << endl;
	
	
	for (n = 0; n < 3; n++)
	{
		cout << "Enter title: ";
		getline(cin, films[n].title);
		cout << "Enter year: ";
		getline(cin, mystr);
		stringstream(mystr) >> films[n].year;
	}

	cout << "\nYou have entered these movies:\n";
	for (n = 0; n < 3; n++)
		printmovie(films[n]);
	return 0;
}