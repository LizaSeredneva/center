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
	while (A != B)
		if (A > B) A -= B;
		else B -= A; 
	cout << "НОД: " << A;
	return 0;
}