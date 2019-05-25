#include <iostream>

using namespace std;

//funtion & Void
//disebut juga reporter = karena mengembalikan nilai
int kuadrat(int x) {
	int y;
	y = x * x;
	return y;
}

// tidak mengembalikan nilai
//void adalah tipe data yang kosong

void tampilkan( int input) {
	cout << "Hasil dari Void" << endl;
	cout << input << endl;
}
int main() {
	int input, hasil,a , b, hasil2;
	cout << "Masukan nilai: ";
	cin >> input;
	
	hasil = kuadrat(input);
	cout << "Kuadratnya adalah: " <<  hasil << endl;
	tampilkan(hasil);
	cin.get();
}
