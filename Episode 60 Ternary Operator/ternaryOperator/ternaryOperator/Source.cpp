#include <iostream>
using namespace std;

// ternary operator ?
// (kondisi) ? hasil1 : hasil2

int main() {
	int a, b;
	string hasil1, hasil2, output;

	hasil1 = "otong";
	hasil2 = "ucup";

	a = 5;
	b = 7;

	output = (a < b) ? hasil1 : hasil2; //kependekan dari if conditional
	cout << output << endl;
}