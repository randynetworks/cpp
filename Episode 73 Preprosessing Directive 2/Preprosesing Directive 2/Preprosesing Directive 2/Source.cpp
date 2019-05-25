// preprosessing directive
// preprosessing directive
#include <iostream>

// macro => merubah  nilai dengan nama
// harus menggunakan huruf besar

#define PI 3.14
#define BAHASA "Indonesia"

// micro untuk fungsi
#define KUADRAT(X) (X*X)
#define MAX(A, B) ((A > B) ? A:B)

// akhir dari preprosessing directive

using namespace std;

int main() {
	cout << "Nilai PI: " << PI << endl;
	cout << "Bahasa: " << BAHASA << endl;
	cout << "Kuadrat: " << KUADRAT(14) << endl;
	cout << "max: " << MAX(5, 10) << endl;

	//dapat juga undefine
	#undef BAHASA
	#define BAHASA "Inggris"
	cout << BAHASA << endl;
}