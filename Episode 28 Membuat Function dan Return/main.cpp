#include <iostream>

using namespace std;

//funtion
int kuadrat(int x) {
	int y;
	y = x * x;
	return y;
}

int tambah(int a, int b) {
	int c;
	c = a + b;
	return c;
}

int main() {
	int input, hasil,a , b, hasil2;
	cout << "Masukan nilai: ";
	cin >> input;
	
	hasil = kuadrat(input);
	cout << "Kuadratnya adalah: " <<  hasil << endl;


	cout << "Masukan nilai a: ";
	cin >> a;
	cout << "Masukan nilai b: ";
	cin >> b;
	hasil2 = tambah(a, b);
	
	cout << "Jumlahnya adalah: " << hasil2 << endl;
	

}