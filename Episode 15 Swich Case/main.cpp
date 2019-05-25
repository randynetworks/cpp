#include <iostream>

using namespace std;

int main() {
	//switch case

	int a;
	cout << "Masukan nilai: ";
	cin >> a;

	switch (a)
	{
	
	case 1:
		cout << "a = 1" << endl;
		break;
	case 2 :
		cout << "a = 2" << endl;
		break;
	case 3:
		cout << "a = 3" << endl;
		break;
	default: 
		cout << "Nilai yang dimasukan tidak terdaftar";
		
	}
}
