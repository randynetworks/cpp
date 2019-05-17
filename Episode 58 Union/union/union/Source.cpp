#include <iostream>
using namespace std;

union nama{
	int int_value;
	char char_value[4];
};

int main() {
	nama otong;
	otong.int_value = 42943213;
	cout << "data int_value: " << otong.int_value << endl;
	cout << "data char_value: " << otong.char_value << endl;

	otong.char_value[0] = 'a';
	otong.char_value[1] = 'b';
	otong.char_value[2] = 'c';
	otong.char_value[3] = 'd';

	cout << "data int_value: " << otong.int_value << endl;
	cout << "data char-value: " << otong.char_value << endl;

	cin.get();
	return 0;
}