#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int A, B, l;
	l = 0;
	cout << "Введите число А: ";
	cin >> A;
	cout << "Введите число B: ";
	cin >> B;
	while (l + B < A) {
		l += B; }
	cout << "Остаток: " << A - l;
	return 0;
}