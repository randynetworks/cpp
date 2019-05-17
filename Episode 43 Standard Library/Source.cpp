#include <iostream>
#include <array>

using namespace std;

int main() {
	//deklarasi array menggunakan standard library Array

	array <int, 5> nilai;

	for ( int i = 0; i <= 4; i++){
		nilai[i] = i
			cout << "Nilai [" << i << "]= " << nilai[i] << ", Address nya adalah = " << &nilai[i] << endl;
	}


}