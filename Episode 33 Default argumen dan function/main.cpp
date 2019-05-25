#include <iostream>
using namespace std;

//default argumen atau ni;ai standarnya
double volume_balok(double p = 1, double l = 1, double t = 1);

int main() {
	cout << "Volume Balok : " << volume_balok(3,4,5) << endl;
	cout << "Volume Balok : " << volume_balok(3, 4) << endl;
	cout << "Volume Balok : " << volume_balok(3) << endl;
	cout << "Volume Balok : " << volume_balok() << endl;
	return 0;
}

double volume_balok(double p, double l, double t) {

	return p * l* t;

}
