#include <iostream>
#include <cstdlib> // ada fungsi random

using namespace std;
int main() {
	// membuat dadu
	
	char lanjut;
	while (true){
		cout << "Lempar dadu? (y/n) ";
		cin >> lanjut;

		if (lanjut == 'y') {
			cout << 1 + (rand() % 6) << endl;
		}
		else if (lanjut == 'n')
		{
			break;
		}
		else
			cout << "pilihlah y atau n!" << endl;
	}
}
