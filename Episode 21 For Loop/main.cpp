#include <iostream>
using namespace std;

int main() {
	// for loop

	//biasa
	cout << "biasa" << endl;
	for (int i = 0; i <= 5; i++)
	{
		cout << "angka: " << i << endl << endl;
	}

	//jika menggunakan i+=
	cout << "menggunakan i+=" << endl;
	for (int i = 0; i <= 5; i+=2)
	{
		cout << "angka: " << i << endl<< endl;
	}

	//decrement
	cout << "decrement" << endl;
	for ( int i = 0; i <= -5; i--)
	{
		cout << "angka: " << i << endl<< endl;
	}

	//campuran
	cout << "campuran" << endl;
	int b = 0;
	for (int i = 0; i <= 5; i++, b += i)
	{
		cout << "angka: " << i <<" || "<< "campuran: "<< b << endl;
	}
}
