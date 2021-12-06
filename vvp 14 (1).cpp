#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int A, B;
	cout << "Введите число А: ";
	cin >> A;
	cout << "Введите число B: ";
	cin >> B;
	for (int i = 0; i <= B - A; i++) {
		for (int j = 0; j < A + i; j++) {
			cout << A + i << " ";
		}
	}
	return 0;
}