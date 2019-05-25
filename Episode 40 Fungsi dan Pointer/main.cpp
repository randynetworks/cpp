#include <iostream>

using namespace std;
//fungsi pointing
void fungsi(int *);
void kuadrat(int*);

int main() {
	int a = 5;
	cout << "adress nya adalah: " << &a << endl;
	cout << "Nilai nya adalah: " << a << endl;

	//fungsi (&a); // fungsi dengan input pointer
	kuadrat(&a);

	cout << " Nilai a : " << a << endl;

	cin.get();
	return 0;
}

void fungsi(int* b) {
	cout << "Address b = " << b << endl;
	cout << "Nilail b = " << *b << endl; //dereferencing
}

void kuadrat(int* valPtr) {
	*valPtr = (*valPtr) * (*valPtr);
}