#include <iostream>
using namespace std;

int main() {

	//increment dan decrement
	// ada preincrement dan ada postincrement

	int a = 5;
	int b = 5;

	//preincrement

	cout << a << endl;
	cout << a++ << endl; // jadi, intuk preincrement itu di tulis dulu baru ditambahkan
	cout << a << endl << endl;

	//postincrement
	cout << b << endl;
	cout << ++b << endl; // jadi, untuk postincrement itu di tambah dulu baru di print
	cout << b << endl;
}
