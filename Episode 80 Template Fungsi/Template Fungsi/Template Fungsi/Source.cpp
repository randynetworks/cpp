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

// jika untuk konfersi antar tipe data]
template <typename T>
int toInt(T data) {
	return int(data);
}


int main() {
	print(5);
	print(5.8);
	print('c');

	print(toInt(10.102313));

	cin.get();
	return 0;
}