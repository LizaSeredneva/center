#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int N, f, f_prev, k;
	cout << "Введите число N: ";
	cin >> N;
	f_prev = 1;
	f = 2;
	k = 4;
	while (f != N) {
		f += f_prev;
		f_prev = f - f_prev;
		k++;
	}
	cout << "k: " << k;
	return 0;
}