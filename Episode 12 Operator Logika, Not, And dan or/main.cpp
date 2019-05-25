#include <iostream>

using namespace std;

int main() {
	int a = 10;
	int b = 5;

	bool hasil;
	//operator logika : not, and, or

	// not
	cout << "Not" << endl;
	hasil = !(a == 10);
	cout << hasil << endl;

	// and
	cout << "and" << endl;
	hasil = (a == 10) and (b == 5); //true and true
	cout << hasil << endl;
	hasil = (a == 11) and (b == 5); //false and true
	cout << hasil << endl;
	hasil = (a == 10) && (b == 6); //true and false
	cout << hasil << endl;
	hasil = (a == 11) and (b == 6); //false and false
	cout << hasil << endl;

	//or
	cout << "or" << endl;
	hasil = (a == 10) or (b == 5); //true or true
	cout << hasil << endl;
	hasil = (a == 11) or (b == 5); //false or true
	cout << hasil << endl;
	hasil = (a == 10) || (b == 6); //true or false
	cout << hasil << endl;
	hasil = (a == 11) || (b == 6); //false or false
	cout << hasil << endl;

}
