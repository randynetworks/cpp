#include <iostream>
#include <array>

using namespace std;

int main() {
	cout << "Program menampilkan grafik nilai" << endl << endl;

	array <int, 10> nilai;
	for (int i = 0; i <= 11; i++){
		cout << "Jumlah mahasiswa dengan nilai ";
		if (i == 0){
			cout << "0-9  : ";
		}else if (i == 10){
			cout << "100  : ";
		}
else{
			cout << i * 10 << "-" << (i * 10) + 9 << " : ";
		}
		cin >> nilai[i];
	}

}