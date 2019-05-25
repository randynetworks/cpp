#include <iostream>

using namespace std;

int main() {

	//asignment
	int a = 10;

	cout << "Nilai awal adalah: " << a << endl;
	
	//asignment operator

	//biasanya kan seperti ini:

	// variabel = variabel asignment ekspresi
	//     a    =     a       +         10

	//itu bisa lebih diperingkas seperti ini:

	// variable asignment= ekepresi
	//    a        +=       10

	//pertambahan
	a += 10;
	cout << "Nilai setelah ditambah 10: "<<a << endl;

	//pengurangan
	a -= 10;
	cout << "Nilai setelah dikurang 10: " << a << endl;

	//perkalian
	a *= 10;
	cout << "Nilai setelah dikali 10: " << a << endl;
	
	//pembagian
	a /= 10;
	cout << "Nilai setelah dibagi 10: " << a << endl;

	//modulus
	a %= 10;
	cout << "Nilai setelah dimodulus 10: " << a << endl;

}