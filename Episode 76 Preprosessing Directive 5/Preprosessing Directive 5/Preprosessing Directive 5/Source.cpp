#include <iostream>
#include "bersama.h"
#include "foo.h"
#include "bar.h"
/*
// ifdef
#ifdef FOO
#define TEST_FOO "FOO ada"
#else
#define TEST_FOO "FOO tidak ada"
#endif // FOO

// ifndef
#ifndef FOO
#define FOO "Foo Baru"
#endif // !FOO
*/


// pragma once

using namespace std;

int main() {
	mahasiswa mahasiswa;
	mahasiswa.NIM = 10;
	cout << mahasiswa.NIM << endl;
	cin.get();
	return 0;
}