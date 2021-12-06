#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int N, K, sum;
	cout << "Введите число N: ";
	cin >> N;
	sum = 0; K = 1;
	while (sum < N) {
		sum += K;
		K++;
	}
	K--;
	cout << "K: " << K << " Сумма: " << sum;
	return 0;
}