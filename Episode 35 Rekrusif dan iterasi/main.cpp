#include <iostream>

using namespace std;

int pangkatIterasi(int a, int b) {
	int hasil = a;
	for (int i = 1; i < b; i++){
		hasil = hasil * a;
	}
	return hasil;
}

int pangkatrekrusif(int a, int b) {
	if (b <= 1){	
	cout << "akhir rekrusif \n";
		return a;
	}
	else
	{
		cout << "rekrusif \n";
		return a * pangkatrekrusif(a, (b - 1));
	}
}
int main() {
	int a;
	int b;
	cout << "masukan angka: ";
	cin >> a;
	cout << "masukan pangkat: ";
	cin >> b;
	cout << "Hasil Iterasi : " << pangkatIterasi(a, b) << endl;
	cout << "Hasil Rekrusif : " << pangkatrekrusif(a, b) << endl;
}
