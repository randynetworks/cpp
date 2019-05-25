#include <iostream>

using namespace std;

int main() {
	// looping biasa
	for (int i = 0; i <= 10; i++) {
		cout << i << endl;
	}
	cout << "Looping biasa \n \n" ;
	// mengguanakan looping for break

	for (int i = 0; i <= 10; i++) {
		if (i == 5)
		{
			break;
		}
		cout << i << endl;
	}
	cout << "looping for break \n \n";
	
	// menggunakan looping for continue
	for (int i = 0; i <= 10; i++) {
		if (i == 5)
		{
			continue;
		}
		cout << i << endl;
	}
	cout << "looping for continue \n \n";


	// menggunakan looping while break
	int i = 0;
		while (i <= 10){
			if (i == 5){
				break;
			}
			cout << i << endl;
			i++;
		}
		cout << "looping while break \n \n";

	// menggukanan looping while continue
		int j = 0;
		while (j <= 10) {
			j++;
			if (j == 5) {
				continue;
			}
			cout << j << endl;
			
		}
		cout << "looping while continue \n \n";
	cin.get();
}