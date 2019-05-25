#include <iostream>

using namespace std;

int main() {
	//typedef adalah memberikan alias untuk tipe data

	typedef int I;
	typedef int iVector2D[2];
	typedef unsigned long ulong;
	typedef double vector[2];

	//dapat menggunakan using juga
	using numbers = double;

	I a = 10;
	iVector2D b = { 1,2 };
	ulong c = 32312312323;
	vector d = { 10.44, 15.42 };
	numbers e = 10.4343;

	cout << "Nilai a : " << a << endl;
	cout << "Nilai b : " << b[0] << " dan " << b[1] << endl;
	cout << "Nilai c : " << c << endl;
	cout << "Nilai d : " << d[0] << " dan " << d[1] << endl;
	cout << "Nilai e : " << e << endl;
}