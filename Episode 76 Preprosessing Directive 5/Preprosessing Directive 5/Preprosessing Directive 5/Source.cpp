#include <iostream>

#define FOO "foo Lama"

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


// pragma once

using namespace std;

int main() {
	cout << FOO << endl;
	cin.get();
	return 0;
}