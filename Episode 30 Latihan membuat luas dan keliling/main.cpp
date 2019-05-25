#include <iostream>
using namespace std;

double luas(double p, double l) {
	double luas = p * l;
	return luas;
}
double keliling(double p, double l) {
	double keliling = 2 * (p * l);
	return keliling;
}
void tampilkan_luas(double p, double l) {
	cout << "Luasnya adalah : ";
	cout << luas(p, l) << endl;
}
void tampilkan_Keliling(double p, double l) {
	cout << "kelilingnya adalah : ";
	cout << keliling(p, l) << endl;
}
int main(){
	double panjang, lebar;

	cout << "Masukan Panjang: ";
	cin >> panjang;
	cout << "Masukan Lebar: ";
	cin >> lebar;

	tampilkan_luas(panjang, lebar);
	tampilkan_Keliling(panjang, lebar);

	cin.get();
	return 0;
}
