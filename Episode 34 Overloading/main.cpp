#include <iostream>

using namespace std;
// general function
int luas_kotak(int panjang, int lebar) {
	return panjang * lebar;
}

//overloading 1
int luas_kotak(int sisi) {
	return sisi * sisi;
}
//overloading 2
double luas_kotak(double sisi) {
	return sisi * sisi;
}
int main() {
	cout << "Luas kotak 2x3 : " << luas_kotak(2, 3) << endl;
	cout << "Luas kotak 2x2 : " << luas_kotak(2) << endl;
	cout << "Luas kotak 2.5x2.5 : " << luas_kotak(2.5) << endl;
}