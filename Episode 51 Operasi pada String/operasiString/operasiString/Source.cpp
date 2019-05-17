#include <iostream>
#include <string>

using namespace std;

int main() {

	string kata("cat");
	//menampiljan data string
	cout << kata << endl;

	//mengambil karakter berdasarkan index
	cout << "Index ke 0 : " << kata[0] << endl;
	cout << "Index ke 0 : " << kata[1] << endl;
	cout << "Index ke 0 : " << kata[2] << endl;

	//merubah karakter pada index
	kata[1] = 'e';
	cout << kata << endl;

	// menyambungkan, concatination
	string kata2(kata + "ar");
	cout << kata2 << endl;
	// atau
	string kata3("membahana");
	kata2.append(" " + kata3);
	cout << kata2 << endl;
	//atau
	string kata4("ahayyyyy");
	kata2 += " " + kata4;
	cout << kata2 << endl;

	cin.get();
	return 0;
}