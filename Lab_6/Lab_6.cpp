#include <iostream>
using namespace std;
/*
12. Дано  вещественное  число A  и  целое  число  N > 0. 
Найти  A  в   степени   N: AN =A∙A∙...∙A (числа A перемножаются N раз).
*/
int main()
{
	setlocale(LC_ALL, "Russian");
	
	float A;
	int N = 0;
	cout << "Введите вещественное число А : ";
	cin >> A;
	cout << "Введите число N : ";
	cin >> N;
	float result = 1;

	while (N > 0) {
		N -= 1;
		result *= A;
	}
	cout << result;
	return 0;
}