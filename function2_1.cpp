#include "Header2_1.h"
string Get_Function_not_minus(string a, string b) {
	for (int i = 0; i < a.size(); i++) {
		if (a[i] != '-') {
			b += a[i];
		}
	}
	return b;
}
string Get_Function_five(string a, string b) {
	for (int i = 0; i < a.size(); i++) {
		a[i] = '5';
		b += a[i];
	}
	return b;
}
string Get_Function_random(string a, string b) {
	for (int i = 0; i < a.size(); i++) {
		a[i] = char(48 + rand() % 10);
		b += a[i];
	}
	return b;
}
void OutPut_str(string a) {
	for (int i = 0; i < a.size(); i++) {
		cout << a[i];
	}
}
