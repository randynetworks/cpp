#include <iostream>
#include <array>
#include <algorithm>

const size_t arraySize = 10;

void printArray(std::array <int, arraySize>& angka) {
	std::cout << "Array: ";
	for (int& a : angka) {
		std::cout << a << " ";
	}
	std::cout << std::endl;
}

int main() {
	std::array <int, arraySize> angka = { 9,4,6,7,8,1,3,2,5,0 };
	printArray(angka);
	

	int angkaCari;
	bool ketemu;
	//sort dulu
	//search -> binary_search
	std::cout << "masukan angka yang anda cari :";
	std::cin >> angkaCari;
	std::sort(angka.begin(), angka.end());
	ketemu = std::binary_search(angka.begin(), angka.end(), angkaCari);

	if (ketemu) {
		std::cout << "Ketemu" << std::endl;
	}
	else {
		std::cout << "Tidak Ketemu" << std::endl;
	}
	
	
}