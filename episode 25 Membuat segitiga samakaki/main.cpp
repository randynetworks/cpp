#include <iostream>
using namespace std;

int main(){
	// membuat patten segitiga
	int n;
	cout << "Masukan panjang pola: ";
	cin >> n;

	cout << "Pola 5" << endl;

	for (int i = 1; i <= n; i++) {
		for (int j = n; j > i; j--) {
			cout << " ";
		}
		for (int k = 1; k <= (i*2-1); k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << "Pola 6" << endl;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			cout << " ";
		}
		for (int k = n; k >= (2*i - n) ; k--)
		{
			cout << "*";
		}
	
		
		cout << endl;
	}


} 
