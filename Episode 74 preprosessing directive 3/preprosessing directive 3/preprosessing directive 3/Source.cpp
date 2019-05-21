// if else preprosessing derective
#include <iostream>

#define ID 1
#if ID == 1
	#define LANG "INDONESIA"
#else
	#define LANG "ENGLISH"
#endif // ID == 1

using namespace std;

int main() {
	cout << "Bahasa Dipilih: " << LANG << endl;
	cin.get();
	return 0;
}
