#include<iostream>
#include <string>
using namespace std;

int main() {
	//perbandingan string
	string input;
	string nama_rahasia("ucup");

	while (true) {
		cout << "Tebak nama : ";
		cin >> input;

		if (input == nama_rahasia) {
			cout << "Tebakan anda benar!!!" << endl;
			break;
		}
		cout << "Tebakan anda salah!!" << endl;
	}
	cout << "Program selesai" << endl;

	cin.get();
	return 0;
}