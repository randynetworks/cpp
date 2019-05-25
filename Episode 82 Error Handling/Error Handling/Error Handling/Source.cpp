#include <iostream>
#include <exception>

using namespace std;

/*
error handling :
1. Systax error : kurang ( atau ;
2. linking error : kesalahan membuat prototype fungsi / beda type data
3. non-error : error dari kesalahan input
4. runtime error :
*/

int pembagian(int& num, int& denum) {
	if (denum == 0) {
		//throw overflow_error("Error: pembagi nol");
		throw "Error: Pembagi nol";
	}
	return num / denum;
}


int main() {
	int a;
	int b;
	int c;

	while (true) {
		cout << "num: ";
		cin >> a;
		cout << "denum: ";
		cin >> b;

		try {
			c = pembagian(a, b);
			cout << c << endl;
		}
		//catch (exception& e) {
			//cout << e.what() << endl;
		catch (const char* e){
			cout << e << endl;
		}

		char tanya;
		cout << "lanjut? (y/n)";
		cin >> tanya;
		if (tanya == 'n' || tanya == 'N') {
			break;
		}

	}

	cout << "Akhir dari program" << endl;

	cin.get();
	return 0;
}