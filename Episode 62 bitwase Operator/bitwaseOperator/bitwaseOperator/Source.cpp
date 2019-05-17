#include <iostream>
#include <bitset> //untuk menampilkan nilai bit dari sebuah data
#include <string>

using namespace std;

void printBinary(unsigned short val, string nama) {
	cout << nama << " = " << bitset<8>(val) << endl;
}

int main() {
	unsigned short a = 6;
	unsigned short b = 10;
	unsigned short c;

	cout << "\n<< - Bitwase SHL" << endl;
	c = a << 1;
	printBinary(a, "a");
	printBinary(c, "c");
	cout << c << endl;

	cout << "\n>> - Bitwase SHR" << endl;
	c = a >> 2;
	printBinary(a, "a");
	printBinary(c, "c");
	cout << c << endl;

	cout << "\n~ - Bitwase NOT" << endl;
	c = ~a;
	printBinary(a, "a");
	printBinary(c, "c");
	cout << c << endl;

	cout << "\n| - Bitwase OR" << endl;
	c = a | b;
	printBinary(a, "a");
	printBinary(b, "b");
	printBinary(c, "c");
	cout << c << endl;

	cout << "\n^ - Bitwase XOR" << endl;
	c = a ^ b;
	printBinary(a, "a");
	printBinary(b, "b");
	printBinary(c, "c");
	cout << c << endl;

	cout << "\n| - Bitwase OR" << endl;
	c = a | b;
	printBinary(a, "a");
	printBinary(b, "b");
	printBinary(c, "c");
	cout << c << endl;

	cout << "\n& - Bitwase AND" << endl;
	c = a & b;
	printBinary(a, "a");
	printBinary(b, "b");
	printBinary(c, "c");
	cout << c << endl;
}