//Menggunakan IF

#include <iostream>

using namespace std;

int main() {
	//membuat calculator sederhana
	float a, b, hasil;
	char aritmatika;
	cout << "Selamat datang di calculator sederhana!" << endl;

	//input nilai
	cout << "Masukan angka pertama: ";
	cin >> a;
	cout << "masukan operator +, -, /, *: ";
	cin >> aritmatika;
	cout << "Masukan angka kedua: ";
	cin >> b;

	if (aritmatika == '+'){
		hasil = a + b;
	}else if (aritmatika == '-') {
		hasil = a - b;
	}else if (aritmatika == '/') {
		hasil = a / b;
	}else if (aritmatika == '*') {
		hasil = a * b;
	}else{
		cout << "aritmatika yang dimasukan salah!";
	}
	cout << a<< " " << aritmatika << " " << b << " = " << hasil << endl;


}

//Menggunakan Switch Case

#include <iostream>
using namespace std;

int main() {
	float a, b, hasil;
	char aritmatika;

	cout << "Selamat datang di Calculator sederhana" << endl;
	//input
	cout << "Masukan angka pertama: ";
	cin >> a;
	cout << "Masukan Aritmatika +, -, *, /: ";
	cin >> aritmatika;
	cout << "Masukan angka kedua: ";
	cin >> b;

	switch (aritmatika)
	{
	case '+': hasil = a + b;
		break;
	case '-': hasil = a - b;
		break;
	case '*': hasil = a * b;
		break;
	case '/': hasil = a / b;

	default: cout << "Aritmatika yang dimasukan salah!" << endl;
		break;
	}

	cout << a << " " << aritmatika << " " << b << " = " << hasil << endl;
}
