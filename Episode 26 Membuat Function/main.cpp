#include <iostream>
#include <cmath>
using namespace std;

/*
library cmath = www.cppreference.com
ceil(x)			<- Pembulatan keatas
cos(x)			<- cosinus
exp(x)			<- eksponen
fabs(x)			<- nilai absolute dalam float
floor(x)		              <- pembulatan kebawah
fmod(x)			<- modulus dalam float
log(x)			<- logaritma dengan basis natural
log10(x)		<- logaritma dengan basis 10
pow(x, y)		<- x pangkat y
sin(x)			<- sinus
sqrt(x)			<- akar kuadrat
tan(x)			<- tangen

*/

int main() {
	//belajar function
	//cmath

	int x;
	cout << "Masukan Nilai x: ";
	cin >> x;

	double y = sqrt(x);
	cout << "Nilai akar dari x adalah: " << y << endl;



	cin.get();
}