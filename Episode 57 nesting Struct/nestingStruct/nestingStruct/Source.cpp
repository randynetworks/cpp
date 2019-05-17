#include <iostream>
#include <string>

using namespace std;

struct actor {
	string nama;
	int tahun_lahir;
};

struct film {
	string judul;
	string genre;
	int tahun;
	// struct aktor
	actor pemeran_1;
	actor pemeran_2;
};

int main() {

	actor actor1, actor2;
	film film1;

	// buat aktor 1
	actor1.nama = "Michel Otong";
	actor1.tahun_lahir = 1992;

	// buat aktor 2
	actor2.nama = "Sandra Bulog";
	actor2.tahun_lahir = 1995;

	// buat film
	film1.judul = "Pengapdi Wakanda";
	film1.genre = "Documenter";
	film1.tahun = 2018;

	cout << film1.judul << endl;
	cout << film1.pemeran_1.nama << endl;
	cout << film1.pemeran_2.nama << endl;

	cin.get();
	return 0;
}