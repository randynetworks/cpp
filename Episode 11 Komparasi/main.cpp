#include <iostream>

using namespace std;

int main() {
	//komparasi atau relation expresstion

	int a = 2;
	int b = 2;

	bool hasil1, hasil2, hasil3, hasil4, hasil5, hasil6;

	//sebanding ==
	hasil1 = (a == b);
	//tidak sebanding !=
	hasil2 = (a != b);
	//kurang dari <
	hasil3 = (a < b);
	//lebih dari >
	hasil4 = (a > b);
	//kurang dari samadengan
	hasil5 = (a <= b);
	//lebih dari samadengan
	hasil6 = (a >= b);

	cout << hasil1 << endl;
	cout << hasil2 << endl;
	cout << hasil3 << endl;
	cout << hasil4 << endl;
	cout << hasil5 << endl;
	cout << hasil6 << endl;
}
