#include <iostream>
using namespace std;

int main() {
	// variable
	int a = 10;

	cout << "Alamat dari a: " << &a << endl;
	cout << "Nalai dari a: " << a << endl;

	//reference
	int &b = a;
	cout << "Alamat dari b: " << &b << endl;
	cout << "Nalai dari b: " << b << endl;

	 a = 35;
	cout << "Alamat dari a: " << &a << endl;
	cout << "Nalai dari a: " << a << endl;

	cout << "Alamat dari a: " << &b << endl;
	cout << "Nalai dari a: " << b << endl;
}
