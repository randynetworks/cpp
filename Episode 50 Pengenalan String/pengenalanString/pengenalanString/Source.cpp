#include <iostream>
#include <string>
using namespace std;

int main() {
	string kata("Chat");
	cout << kata << endl;
	cout << endl;
	
	string data;
	cout << "Masukan kata : ";
	cin >> data;
	cout << "Data yang dimasukan adalah : ";
	cout << data << endl;

	cin.get();
	return 0;
}