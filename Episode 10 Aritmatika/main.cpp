#include <iostream>

using namespace std;

int main() {
	//aritmatika
	int a = 10;
	int b = 2;
	int hasil;

	//operator aritmatika standar pada C++ yaitu *, /, -, +

	// perkalian
	hasil = a * b;
	cout << a << " * " << b << " = " << hasil << endl;
	// pembagian
	hasil = a / b;
	cout << a << " / " << b << " = " << hasil << endl;
	// pengurangan
	hasil = a - b;
	cout << a << " - " << b << " = " << hasil << endl;
	// pertambahan
	hasil = a + b;
	cout << a << " + " << b << " = " << hasil << endl;
	// modulus
	hasil = a % b;
	cout << a << " % " << b << " = " << hasil << endl;
	// urutan eksekusi
	hasil = (a + b) * a;

	cout <<  hasil << endl;

}