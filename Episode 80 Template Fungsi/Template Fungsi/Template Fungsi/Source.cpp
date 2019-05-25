#include <iostream>
#include <string>

using namespace std;

/* jika menggunakan void biasa tampa template, 
untuk membuat fungsi harus dibuat 
satupersatu sesuai banyaknya perbedaan tipedata */

template <typename T>
void print(T data) {
	cout << data << endl;
}

// jika untuk konfersi antar tipe data
template <typename T>
int toInt(T data) {
	return int(data);
}

//membandingkan, namun tidak otomatis
template<typename T, typename U>
T max(T a, U b) {
	return (a > b) ? a : b; //menggunakan ternary 
}

int main() {
	print(5);
	print(5.8);
	print('c');

	print(toInt(10.102313));
	cout << max(10, 11.4) << endl;

	//dapat menggunakan reinterpreter sebagai pemberi tahu
	//bahwa tipe datanya harus ini
	print<double>(10.15);
	cout << max<double, int>(11.1, 12) << endl;
	cin.get();
	return 0;
}