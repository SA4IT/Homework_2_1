#include "Header2_1.h"

int main() {
	setlocale(LC_ALL, "RUS");
	cout << "Введите строку!" << endl;
	string line;
	getline(cin, line);
	cout << "Выберите действие со строкой (выбирете 1 или 2 или 3):" << '\n' << "1.Исключить все минусы из строки" << '\n';
	cout << "2.Поменять все элементы строки на '5'" << '\n' << "3.Поменять все элементы строки на рандомные значения" << '\n' << endl;
	int k;
	cin >> k;
	if (!cin || k < 1 || k > 3) {
		cout << "Ошибка ввода!" << endl;
		system("pause");
		return 0;
	}
	string OutPut;
	string result;
	string(*OutPut_TEMP)(string a, string b);
	if (k == 1) {
		OutPut_TEMP = Get_Function_not_minus;
		result = OutPut_TEMP(line, OutPut);
		OutPut_str(result);
	}
	if (k == 2) {
		OutPut_TEMP = Get_Function_five;
		result = OutPut_TEMP(line, OutPut);
		OutPut_str(result);
	}
	if (k == 3) {
		OutPut_TEMP = Get_Function_random;
		result = OutPut_TEMP(line, OutPut);
		OutPut_str(result);
	}
	return 0;
}